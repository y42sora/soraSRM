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
		int sum = 0;
		char c[] = {'R','G','B','Y'};

		FOR(i,0,4){
			int inN = count(init.begin(),init.end(),c[i]);
			int goN = count(goal.begin(),goal.end(),c[i]);
			sum += abs(inN-goN);
		}
		return int(sum/2);
	}
};
