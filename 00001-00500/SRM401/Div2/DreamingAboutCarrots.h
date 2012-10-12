//include
//------------------------------------------
#include <complex>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)

using namespace std;

const double EPS = 1e-10;
const double PI  = acos(-1.0);
#define EQ(a,b) (abs((a)-(b)) < EPS)
typedef complex<double> P;

class DreamingAboutCarrots {
	double cross(P a, P b) {
	  return (a.real() * b.imag() - a.imag() * b.real());
	}
	int isPointOnLine(P a, P b, P c) {
	  if ( EQ(abs(a-c), 0.0) || EQ(abs(b-c), 0.0) ) return 1;

	  if (a.real() < b.real()) {
	    if (c.real() < a.real() || b.real() < c.real()) return 0;
	  } else {
	    if (c.real() < b.real() || a.real() < c.real()) return 0;
	  }

	  if (a.imag() < b.imag()) {
	    if (c.imag() < a.imag() || b.imag() < c.imag()) return 0;
	  } else {
	    if (c.imag() < b.imag() || a.imag() < c.imag()) return 0;
	  }

	  return EQ( cross(b-a, c-a), 0.0 );
	}


	public: int carrotsBetweenCarrots(int x1, int y1, int x2, int y2) {
		if(x2 < x1){
			int temp = x1;
			x1 = x2;
			x2 = temp;

			temp = y1;
			y1 = y2;
			y2 = temp;
		}
		int num = 0;

		P a(x1,y1);
		P b(x2,y2);
		FOR(i,-100,100)
			FOR(j,-100,100){
				P c(i,j);
				if(isPointOnLine(a,b,c))
					num++;
		}

		return int(num-2);
	}
};
