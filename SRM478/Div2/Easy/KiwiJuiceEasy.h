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

class KiwiJuiceEasy {

	void move(vector<int> &capacities, vector<int> &bottles, int f,int t) {
		int L = bottles[f] + bottles[t];

		if(capacities[t] < L){
			bottles[t] = capacities[t];
			bottles[f] = L - capacities[t];
		}else{
			bottles[t] = L;
			bottles[f] = 0;
		}
	}

	public: vector<int> thePouring(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId) {
		for(int i=0; i< fromId.size(); i++){
			move(capacities, bottles, fromId[i], toId[i]);
		}
		return bottles;
	}

};
