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

class MakeSquare {
	int LD(string s1, string s2){
		vector< vector<int> > lsl;
		FOR(i,0,s1.size()+1){
			vector<int> in(s2.size()+1,0);
			lsl.push_back(in);
		}

		FOR(i,0,s1.size()+1)
			lsl[i][0] = i;

		FOR(i,0,s2.size()+1)
			lsl[0][i] = i;

		FOR(i,1,s1.size()+1)
			FOR(j,1,s2.size()+1)
				if(s1[i-1] == s2[j-1])
					lsl[i][j] = min(lsl[i-1][j-1], min(lsl[i][j-1]+1, lsl[i-1][j]+1));
				else
					lsl[i][j] = min(lsl[i-1][j-1]+1, min(lsl[i][j-1]+1, lsl[i-1][j]+1));
		return lsl[s1.size()][s2.size()];
	}

	public: int minChanges(string S) {
		int small = S.size() * 3;

		FOR(i,0,S.size())
			small = min(small,LD(S.substr(0,i),S.substr(i,S.length())));

		return int(small);
	}
};
