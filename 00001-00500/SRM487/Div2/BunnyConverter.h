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

class BunnyConverter {
	public: int getMinimum(int n, int z, int start, int goal) {
		vector<bool> flag;
		FOR(i,0,n+1)
			flag.push_back(true);

		int num = 0;

		long long y = goal;
		long long tori = z;
		tori = (((tori * tori) % n) * tori) % n;

		FOR(i,0,n+1){
			if(y == start) return num;

			int yy = (y * y) % n;
			y = n - ((yy  + tori) % n);

			if(!flag[y])
				return -1;

			flag[y] = false;
			num++;
		}
		return -1;
	}
};
