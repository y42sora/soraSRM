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

class CubeColoring {
	public: long long theCount(vector<string> colors) {
		long long ans = 0;
		int n = colors[0].size();
		FOR(a,0,n)
			if(colors[0][a] == 'Y')
			FOR(b,0,n)
				if(colors[2][b] == 'Y')
				FOR(c,0,n)
					if(colors[5][c] == 'Y')
					FOR(d,0,n)
						if(colors[7][d] == 'Y')
						{
							int a1 =0;
							int a2 =0;
							int a3 =0;
							int a4 =0;
							FOR(i,0,n){
								if(colors[1][i] == 'Y')
									if(i != a && i != b && i != c)
										a1++;
								if(colors[3][i] == 'Y')
									if(i != a && i != b && i != d)
										a2++;
								if(colors[4][i] == 'Y')
									if(i != a && i != c && i != d)
										a3++;
								if(colors[6][i] == 'Y')
									if(i != b && i != c && i != d)
										a4++;
							}
							ans += a1*a2*a3*a4;
						}
		return ans;
	}

};
