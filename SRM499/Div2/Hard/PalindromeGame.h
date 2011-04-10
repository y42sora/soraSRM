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

class PalindromeGame {

	public: int getMaximum(vector<string> front, vector<int> back) {
		vector<string> rev;
		vector<bool> flag;
		FOR(i,0,front.size()){
			flag.push_back(false);
			rev.push_back(string(front[i].rbegin(), front[i].rend()));
		}

		FOR(i,0,front.size()){
			FOR(j,0,front.size()){
				if(front[i] == front[j]){
					if(i < j){
						if(back[i] < back[j]){
							int temp = back[j];
							back[j] = back[i];
							back[i] = temp;
						}
					}
				}
			}
		}

		int ans = 0;

		FOR(i,0,front.size()){
			if(!flag[i]){
				FOR(j,0,rev.size()){
					if(i != j){
						if(!flag[j]){
							if(front[i] == rev[j]){
								ans += back[i];
								ans += back[j];

								flag[i] = true;
								flag[j] = true;
								break;
							}
						}
					}
				}
			}
		}

		int big = 0;
		FOR(i,0,front.size())
			if(!flag[i])
				if(front[i] == rev[i])
					big = max(big,back[i]);


		return int(ans + big);
	}

};
