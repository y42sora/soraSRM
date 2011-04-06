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

class MafiaGame {
	public: double probabilityToLose(int N, vector<int> decisions) {
		vector<int> votes(N);
		FOR(i,0,decisions.size())
			votes[decisions[i]]++;

		int big = *max_element(votes.begin(),votes.end());
		int c = count(votes.begin(),votes.end(),big);

		int t = c;
		while(t > 1)
			t = N%t;

		double ans = 0.0;
		if(t != 0 && big != 1)
			ans = 1.0 / c;

		return double(ans);
	}
};
