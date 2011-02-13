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

class InterestingParty {


public: int bestInvitation(vector<string> first, vector<string> second) {

	map<string, int> interested;

	for(int i=0; i<first.size(); i++){
		interested[first[i]] =interested[first[i]] + 1;
		interested[second[i]] =interested[second[i]] + 1;

	}

	int max = 1;
	map<string, int>::iterator it = interested.begin();
	map<string, int>::iterator end = interested.end();
	while(it != end){
		if(max < (*it).second){
			max = (*it).second;
		}
		it++;
	}
	return max;
	}
};
