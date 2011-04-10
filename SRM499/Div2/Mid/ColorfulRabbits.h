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

class ColorfulRabbits {
	public: int getMinimum(vector<int> replies) {
		sort(replies.begin(),replies.end());

		int num  = 0;

		int i = 0;
		while(i < replies.size()){
			num += replies[i] + 1;
			int now = i;
			int n = replies[i];
			i++;
			while(i < replies.size() && replies[i] == replies[now] && 0 < n){
				n--;
				i++;
			}
		}
		return int(num);
	}

};
