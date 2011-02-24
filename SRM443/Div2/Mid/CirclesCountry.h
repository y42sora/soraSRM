#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class CirclesCountry {
	bool inCircle(int x1,int y1,int x2,int y2,int r){
		int y = y2 - y1;
		int x = x1 - x2;

		if(x*x + y*y <= r*r) return true;
		return false;
	}

	public: int leastBorders(vector<int> X, vector<int> Y, vector<int> R, int x1, int y1, int x2, int y2) {
		int num = 0;

		FOR(i,0,R.size()){
			bool start = inCircle(X[i], Y[i], x1, y1, R[i]);
			bool end =   inCircle(X[i], Y[i], x2, y2, R[i]);

			if(start == end) continue;
			num++;
		}
		return int(num);
	}
};
