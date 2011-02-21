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

class Filtering {

	public: vector<int> designFilter(vector<int> sizes, string outcome) {
		vector<int> ans;

		int big = -1;
		int small = 101;

		FOR(i,0,sizes.size()){
			if(outcome[i] == 'A'){
				big = max(big,sizes[i]);
				small = min(small, sizes[i]);
			}
		}

		FOR(i,0,sizes.size()){
			if(outcome[i] == 'R'){
				if(sizes[i] <= big)
					if(small <= sizes[i]) return ans;
			}
		}

		ans.push_back(small);
		ans.push_back(big);
		return ans;
	}

};
