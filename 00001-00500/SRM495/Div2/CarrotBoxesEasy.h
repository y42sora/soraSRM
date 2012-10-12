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

class CarrotBoxesEasy {

	int getMax(vector<int> carrots){
		int max = 0;
		for(int i=1; i < carrots.size(); i++){
			if(carrots[max] < carrots[i]){
				max = i;
			}
		}

		return max;
	}

	public: int theIndex(vector<int> carrots, int K) {

		int ans = -1;

		for(;0 < K; K--){
			ans = getMax(carrots);
			carrots[ans]--;
		}
		return int(ans);
	}

};
