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
		int big = -1;
		for(int i=0; i<first.size(); i++){
			int num = 0;
			for(int j=0; j<first.size(); j++){
				if(first[i] == first[j] || first[i] == second[j]){
					num++;
				}
			}
			big = max(big,num) ;

			num = 0;
			for(int j=0; j<first.size(); j++){
				if(second[i] == first[j] || second[i] == second[j]){
					num++;
				}
			}
			big = max(big,num) ;
		}
		return int(big);
	}

};
