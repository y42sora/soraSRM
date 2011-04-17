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

class WordAbbreviation {
	int check(string a,string b){
		int x = 0;
		int y = 0;
		while(x < a.size() && y < b.size())
			if(a[x++] != b[y++])
				return x;

		return min(x,y);
	}

	public: vector<string> getAbbreviations(vector<string> words) {
		VS ans;
		REP(i,words.size()){
			int big = 1;
			REP(j,words.size()){
				if(i!=j){
					big = max(big, check(words[i],words[j]));
				}
			}
			ans.push_back(words[i].substr(0,big));
		}
		return ans;
	}

};
