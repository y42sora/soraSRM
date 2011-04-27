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

class ComparerInator {
	bool checkOne(VI a,VI w){
		FOR(i,0,a.size())
			if(a[i] != w[i])
				return false;
		return true;
	}

	bool check(VI a,VI b,VI w){
		FOR(i,0,a.size()){
			if(a[i] < b[i]){
				if(a[i] != w[i]){
					return false;
				}
			}else{
				if(b[i] != w[i]){
					return false;
				}
			}
		}
		return true;
	}
	bool check2(VI a,VI b,VI w){
		FOR(i,0,a.size()){
			if(a[i] < b[i]){
				if(b[i] != w[i]){
					return false;
				}
			}else{
				if(a[i] != w[i]){
					return false;
				}
			}
		}
		return true;
	}

	public: int makeProgram(vector<int> A, vector<int> B, vector<int> wanted) {
		if(checkOne(A,wanted))
			return 1;
		if(checkOne(B,wanted))
			return 1;
		if(check(A,B,wanted))
			return 7;
		if(check2(A,B,wanted))
			return 7;
		return int(-1);
	}

};
