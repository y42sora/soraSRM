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

class FoxProgression {
	bool checkArithmetic(vector<int> seq,int x){
		FOR(i,1,seq.size())
			if(seq[i-1] + x != seq[i])
				return false;
		return true;
	}

	bool checkGeometric(vector<int> seq,int x){
		FOR(i,1,seq.size())
			if(seq[i-1] * x != seq[i])
				return false;
		return true;
	}

	public: int theCount(vector<int> seq) {
		if(seq.size() == 1) return -1;

		int ans = 0;

		vector<int> test;
		FOR(i,0,seq.size())
			test.push_back(seq[i]);

		int x = seq[1] - seq[0];
		test.push_back(x + test[test.size()-1]);
		if(checkArithmetic(test,x))
			ans++;

		vector<int> geometric;
		FOR(i,0,seq.size())
			geometric.push_back(seq[i]);

		int y = seq[1] / seq[0];
		if(y *seq[0] == seq[1]){
			geometric.push_back(y * geometric[geometric.size()-1]);
			if(checkGeometric(geometric,y))
				ans++;
		}

		if(geometric[geometric.size()-1] == test[test.size()-1] && ans == 2) ans--;

		return int(ans);
	}
};
