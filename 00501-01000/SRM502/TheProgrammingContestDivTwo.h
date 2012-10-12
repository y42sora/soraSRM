#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> VI;

#define PB push_back
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(int)(b);++i)
#define REP(i,n)  FOR(i,0,n)

class TheProgrammingContestDivTwo {
	public: vector<int> find(int T, vector<int> requiredTime) {
		SORT(requiredTime);

		int t = 0;
		int sum = 0;
		int penalty = 0;

		REP(i,requiredTime.size()){
			if(t+requiredTime[i] <= T){
				sum++;
				t = t+requiredTime[i];
				penalty += t;
			}
		}

		VI x;
		x.push_back(sum);
		x.push_back(penalty);

		return vector<int>(x);
	}
};
