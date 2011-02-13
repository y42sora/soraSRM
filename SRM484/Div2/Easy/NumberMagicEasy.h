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

class NumberMagicEasy {

	public: int theNumber(string answer) {
		int ans = 0;
		for(int i=answer.length(); 0<=i; i--){
			if(answer[i] == 'N'){
				int x = 1;
				for(int j=3; i<j; j--){
					x = x * 2;
				}
				ans += x;
			}
		}

		return int(ans+1);
	}

};
