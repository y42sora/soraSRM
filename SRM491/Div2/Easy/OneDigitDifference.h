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

class OneDigitDifference {

	public: int getSmallest(int N) {
		if(N < 10){
			if(N == 0)return 1;
			else return 0;
		}

		int sum = 0;
		int i = 1;

		while(N > 10){
			sum += (N % 10) * i;
			i *= 10;
			N = N / 10;
		}
		return int(sum);
	}
};
