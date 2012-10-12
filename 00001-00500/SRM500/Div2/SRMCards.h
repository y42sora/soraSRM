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

class SRMCards {
	public: int maxTurns(vector<int> cards) {
		sort(cards.begin(),cards.end());

		int x = 0;
		int i = 0;
		while(i < cards.size()-1){
			x++;
			if(cards[i] + 1 == cards[i+1])
				i+=2;
			else
				i++;
		}
		if(cards.size()-1 == i)x++;
		return int(x);
	}
};
