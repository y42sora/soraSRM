#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
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

class UnsortedSequence {
public:
  vector <int> getUnsorted(vector <int> s) {
	SORT(s);

	for(int i=s.size()-1; 0 < i; i--){
		if(s[i-1] != s[i]){
			swap(s[i-1], s[i]);
			return s;
		}
	}

	VI x;
	return x;
  }
};