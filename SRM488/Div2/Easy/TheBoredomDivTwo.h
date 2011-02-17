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

class TheBoredomDivTwo {

	public: int find(int n, int m, int j, int b) {

		bool *f = new bool[n+m+1];

		FOR(i,0,n) f[i] = true;
		FOR(i,n,n+m) f[i] = false;

		f[j-1] = true;
		f[b-1] = true;

		int num = 0;
		FOR(i,0,n+m){
			if(f[i]) num++;
		}



		return int(num);
	}

};
