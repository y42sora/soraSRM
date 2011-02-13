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

class TimeTravellingCellar {

	public: int determineProfit(vector<int> profit, vector<int> decay) {

		int ans = -1;

		for(int i=0; i<profit.size();i++)
			for(int j=0; j<decay.size(); j++)
				if(i != j)
					ans = max(ans, profit[i]-decay[j]);



		return ans;


	}

};
