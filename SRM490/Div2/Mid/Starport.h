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

class Starport {

	int gcd( int m, int n )
	{
		// 引数に０がある場合は０を返す
		if ( ( 0 == m ) || ( 0 == n ) )
			return 0;

		// ユークリッドの方法
		while( m != n )
		{
			if ( m > n ) m = m - n;
			else         n = n - m;
		}
		return m;
	}//gcd

	public: double getExpectedTime(int N, int M) {
		int gc = gcd(N,M);
		return (N-gc) / 2.0;
	}

};
