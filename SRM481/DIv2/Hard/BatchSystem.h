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

class BatchSystem {
	public: vector<int> schedule(vector<int> duration, vector<string> user) {
		map<string, long long> usersTime;
		map<string, int> usersFirst;

		FOR(i,0,user.size()){
			usersTime[user[i]] = -1;
			usersFirst[user[i]] = -1;
		}

		FOR(i,0,user.size()){
			usersTime[user[i]] = usersTime[user[i]] + duration[i];
			if(usersFirst[user[i]] == -1){
				usersFirst[user[i]] = i;
			}
		}

		vector<long long> sorted;
		FOR(i,0,user.size()){
			long long x = (long long)usersTime[user[i]]*10000 + (long long)usersFirst[user[i]]*100 + (long long)i;
			sorted.push_back(x);
		}

		sort(sorted.begin(), sorted.end());

		vector<int> ans;
		FOR(i,0,sorted.size()){
			ans.push_back((int)(sorted[i] % 100));
		}

		return vector<int>(ans);
	}
};
