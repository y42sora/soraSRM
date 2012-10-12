#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i < int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class FoxPlayingGame {
	double getMinus(int na,int nb,double pa,double pb){
		if(pb <= 0){
			if(pb <= -1){
				if(nb % 2 == 0) nb--;
			}else{
				if(nb != 0) nb = 1;
			}
			double ans =  na * pa;
			FOR(i,0,nb)
				ans = ans * pb;
			return ans;
		}
		if(pb <= 1){
			double ans =  na * pa;
			FOR(i,0,nb)
				ans = ans * pb;
			return ans;
		}

		return na * pa;
	}

	double getPlus(int na,int nb,double pa,double pb){
		if(pb <= -1){
			if(nb % 2 == 1) nb--;
			double ans =  na * pa;
			FOR(i,0,nb)
				ans = ans * pb;
			return ans;
		}
		if(pb < 1){
			return na * pa;
		}

		double ans =  na * pa;
		FOR(i,0,nb)
			ans = ans * pb;
		return ans;
	}

	public: double theMax(int nA, int nB, int paramA, int paramB) {
		if(paramA == 0 || nA == 0) return 0;

		double pa = (double) paramA / 1000.0;
		double pb = (double) paramB / 1000.0;

		if(paramB == 0 )
			if(0 < pa || nB == 0)
				return nA * pa;
			else
				return 0.0;

		double ans = 0;

		if(pa < 0){
			ans = getMinus(nA,nB,pa,pb);
		}else{
			ans = getPlus(nA,nB,pa,pb);
		}
		return double(ans);
	}
};
