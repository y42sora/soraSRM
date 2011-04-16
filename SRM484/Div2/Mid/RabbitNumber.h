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

class RabbitNumber {
	int getS(long long x){
		int num = 0;
		while(x != 0){
			num += x % 10;
			x = x / 10;
		}
		return num;
	}

	int solv(int low,int high,long long x){
		if(high < x) return 0;

		int ans = 0;
		if(low <= x){
			int s = getS(x);
			if(s*s == getS(x*x))
				ans++;
		}

		ans += solv(low,high,x*10+0);
		ans += solv(low,high,x*10+1);
		ans += solv(low,high,x*10+2);
		ans += solv(low,high,x*10+3);
		return ans;
	}

	public: int theCount(int low, int high) {
		int ans = 0;
		ans += solv(low,high,1);
		ans += solv(low,high,2);
		ans += solv(low,high,3);
		return int(ans);
	}

};
