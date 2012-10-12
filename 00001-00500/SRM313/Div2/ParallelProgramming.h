#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class ParallelProgramming {

	bool loopCheck(int n,int N,int *flags,vector<string> prec){

		if(flags[n] == 2) return true;
		if(flags[n] == 1) return false;
		flags[n] = 1;

		FOR(i,0,N){
			if(prec[n][i] == 'Y')
				if(!loopCheck(i,N,flags,prec)) return false;
		}
		flags[n] = 2;

		return true;
	}

	bool check(vector<string> prec, int N){
		FOR(i,0,N){
			int *flags = new int[N];
			FOR(j,0,N)flags[j] = -1;
			if(!loopCheck(i,N,flags,prec)) return false;
		}

		return true;
	}

	public: int minTime(vector<int> time, vector<string> prec) {

		int ans = 0;
		int N = time.size();

		int *t = new int[N];

		if(!check(prec,N)) return -1;

		FOR(i,0,N) {
			t[i] = time[i];
			FOR(j,0,N)
				if(prec[i][j] == 'Y')
					t[i] = INT_MAX;
		}

		bool flag = true;
		while(flag){
			flag = false;
			FOR(i,0,N){
				int big = 0;
				FOR(j,0,N){
					if(prec[j][i] == 'Y')
						big = max(t[j],big);
				}
				if(big != INT_MAX){
					t[i] = big + time[i];
				}else{
					flag = true;
				}
			}
		}

		FOR(i,0,N)
			ans = max(ans,t[i]);

		return int(ans);
	}


};
