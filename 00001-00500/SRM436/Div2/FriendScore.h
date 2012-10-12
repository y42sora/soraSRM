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

class FriendScore {

	public: int highestScore(vector<string> friends) {

		int big = 0;

		FOR(i,0,friends.size()){
			bool *flag = new bool[friends.size()];
			FOR(j,0,friends.size()) flag[j] = false;

			FOR(j,0,friends[i].size()){
				if(friends[i][j] == 'Y'){
					flag[j] = true;
					FOR(k,0,friends[j].size()){
						if(friends[j][k] == 'Y'){
							flag[k] = true;
						}
					}
				}
			}

			flag[i] = false;

			int num = 0;
			FOR(j,0,friends.size())
				if(flag[j])
					num++;
			big = max(big,num);
		}
		return int(big);
	}

};
