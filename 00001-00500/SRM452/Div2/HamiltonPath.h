#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class HamiltonPath {

	int *root;

	int getRoot(int x){
		if(root[x] < 0)	return x;
		int r = getRoot(root[x]);
		return root[x] = r;
	}

	bool set(int x,int y){
		int xr = getRoot(x);
		int yr = getRoot(y);
		if(yr == xr) return false;

		root[xr] += root[yr];
		root[yr] = xr;

		return true;
	}

	long long Factorial(int n)
	 {
	    long long p = 1L;
	    if (n == 0 || n == 1)
	        return (1L);
	    else{
	        for ( ; n > 0; n--)
	            p = p * n;
	            return (p);
	    }
	}

	bool checkRoads(vector<string> roads){
		FOR(i,0,roads.size()){
			int n = 0;
			FOR(j,0,roads[i].size())
				if(roads[i][j] == 'Y')
					n++;

			if(2 < n) return false;
		}
		return true;
	}


	public: int countPaths(vector<string> roads) {

		if(!checkRoads(roads)) return 0;

		int N = roads.size();
		root = new int[N];
		FOR(i,0,N)
			root[i] = -1;

		FOR(i,0,N)
			FOR(j,i,N)
				if(roads[i][j] == 'Y')
					if(!set(i,j))
						return 0;

		int num = 0;
		int p = 0;
		FOR(i,0,N){
			if(getRoot(i) == i)
				num++;
			if(root[i] < -1)
				p++;
		}



		long long ans = 1;

		FOR(i,1,num+1)
			ans = (ans * i) % 1000000007;
		FOR(i,1,p+1)
			ans = (ans * 2) %  1000000007;

		return int(ans);
	}

};
