#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class NinePuzzle {

	public: int getMinimumCost(string init, string goal) {
		int irgby[4];
		int grgby[4];

		FOR(i,0,4){
			irgby[i]=0;
			grgby[i]=0;
		}

		FOR(i,0,init.size()){
			switch(init[i]){
			case 'R': irgby[0]++; break;
			case 'G': irgby[1]++; break;
			case 'B': irgby[2]++; break;
			case 'Y': irgby[3]++; break;
			}
		}

		FOR(i,0,goal.size()){
			switch(goal[i]){
			case 'R': grgby[0]++; break;
			case 'G': grgby[1]++; break;
			case 'B': grgby[2]++; break;
			case 'Y': grgby[3]++; break;
			}
		}

		int sum = 0;
		sum += (int) fabs(irgby[0] - grgby[0]);
		sum += (int) fabs(irgby[1] - grgby[1]);
		sum += (int) fabs(irgby[2] - grgby[2]);
		sum += (int) fabs(irgby[3] - grgby[3]);

		return int(sum/2);
	}

};
