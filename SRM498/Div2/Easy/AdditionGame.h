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

class AdditionGame {

	public: int getMaximumPoints(int A, int B, int C, int N) {
		int sum = 0;

		FOR(i,0,N){
			int x = max(A,max(B,C));
			if(x == 0)continue;
			sum += x;
			if(x == A)A--;
			else if(x == B)B--;
			else C--;
		}
		return int(sum);
	}

};
