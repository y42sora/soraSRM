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

class BunnyComputer {
	public: int getMaximum(vector<int> preference, int k) {
		int ans = 0;
		FOR(i,0,k+1){
			vector<int> num;
			int sum = 0;
			FOR(j,0,preference.size()){
				if(j %  (k+1) == i){
					num.push_back(preference[j]);
					sum += preference[j];
				}
			}
			if(num.size() % 2 == 0){
				ans += sum;
			}else{
				if(sum != 0){
					int x = num[0];
					for(int j=0; j<num.size(); j+=2)
						x = min(x,num[j]);
					ans += sum - x;
				}
			}
		}
		return int(ans);
	}
};
