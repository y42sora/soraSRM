//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
const double EPS = 1e-10;
#define SORT(c) sort((c).begin(),(c).end())

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

class MovieSeating {
	LL comb(int i, int j){
		LL ret = 1;
	    if( i < j ) return 0;
	    for( int k=0; k<j; k++ ){
	    	ret *= i--;
	    }
	    return ret;
	}

	public: long long getSeatings(int numFriends, vector<string> hall) {
		LL ans = 0;
		VI temp = VI(hall[0].size());
		if(numFriends == 1){
			REP(i,hall.size())
				REP(j,hall[i].size())
					if(hall[i][j] == '.')
						ans++;
			return ans;
		}

		REP(i,hall.size()){
			int count = 0;
			REP(j,hall[i].size()){
				if(hall[i][j] == '.'){
					count++;
					temp[j]++;
				}
			}
			ans += comb(count,numFriends);
		}

		REP(i,temp.size())
			ans += comb(temp[i],numFriends);

		return ans;
	}

};
