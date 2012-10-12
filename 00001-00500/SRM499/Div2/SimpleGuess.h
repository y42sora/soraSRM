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

class SimpleGuess {
	bool check(int x,int y,vector<int> hints){
		int a = x+y;
		FOR(i,0,hints.size()){
			if(hints[i] == a){
				int b = x-y;
				FOR(j,0,hints.size()){
					if(hints[j] == b){
						if(i != j){
							return true;
						}
					}
				}
			}
		}

		return false;
	}

	public: int getMaximum(vector<int> hints) {
		int big = -1;

		FOR(i,0,100)
			FOR(j,0,100)
				if(check(i,j,hints))
					big = max(big,i*j);

		return int(big);
	}
};
