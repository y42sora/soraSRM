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

class StonesGame {
	bool isChange(int N, int M, int K, int L) {
		if(L < M) swap(L,M);

		if(abs(L-M) >= K) return false;

		int x = L-M;
		K -= x+1;
		if(K < 0 || 0 != K % 2) return false;

		if( M-K/2 < 1) return false;
		if( N < L+K/2) return false;

		return true;
	}

	public: string winner(int N, int M, int K, int L) {
		if(isChange(N,M,K,L))
			return "Romeo";

		bool flag = false;
		FOR(i,1,N+1)
			flag = flag || isChange(N,M,K,i);

		FOR(i,1,N+1)
			if(isChange(N,M,K,i))
				flag = flag && isChange(N,i,K,L);

		if(flag)
			return "Strangelet";
		else
			return "Draw";
	}
};
