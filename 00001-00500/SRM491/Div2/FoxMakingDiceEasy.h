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

class FoxMakingDiceEasy {

	public: int theCount(int N, int K) {
		long long *num = new long long[N*2];

		FOR(i,0,N*2){
			num[i] = 0;
		}

		for(int i=1; i<=N; i++)
			for(int j=i+1; j<=N; j++)
				num[i+j]++;


		long long ans;
		ans = 0;

		for(int i=K; i<= N*2-1; i++)
			ans += num[i] * (num[i] -1) * (num[i] -2) / 6;

		return ans*2;
	}

};
