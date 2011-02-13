#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()


class CrazyBot {
	bool map[50][50];
	int kaku[4];
	int road[14];

	public: double calc(int n){
		double ans = 1.0;
		for(int i=0; i<n; i++){
			ans = ans * ((double)kaku[road[i]] / 100);
		}
		return ans;
	}

	public: double move(int x,int y,int now,int n){
		double ans = 0.0;


		if(map[x][y]){
			// not move
			return ans;
		}

		if(now == n){
			// move sucess!
			return calc(n);
		}

		map[x][y] = true;
		road[now] = 1;
		ans += move(x+1,y,now+1,n);

		road[now] = 0;
		ans += move(x,y+1,now+1,n);

		road[now] = 3;
		ans += move(x-1,y,now+1,n);

		road[now] = 2;
		ans += move(x,y-1,now+1,n);


		map[x][y] = false;
		return ans;
	}

	public: double getProbability(int n, int east, int west, int south, int north) {
		for(int i=0; i<50; i++)
			for(int j=0; j<50; j++)
				map[i][j] = false;

		kaku[0] = north;
		kaku[1] = west;
		kaku[2] = south;
		kaku[3] = east;

		return move(25,25,0,n);
	}
};
