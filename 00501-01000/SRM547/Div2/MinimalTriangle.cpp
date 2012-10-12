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

#define PI 3.1415926535897932384626433832795
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
const double EPS = 1e-10;
#define SORT(c) sort((c).begin(),(c).end())

class MinimalTriangle {
public:
  double maximalArea(int length) {
	  double a = length;
	  return a*a * sin(120*PI / 180.0) / 2.00;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 5; double Arg1 = 10.825317547305485; verify_case(0, Arg1, maximalArea(Arg0)); }
	void test_case_1() { int Arg0 = 10; double Arg1 = 43.30127018922194; verify_case(1, Arg1, maximalArea(Arg0)); }
	void test_case_2() { int Arg0 = 100000; double Arg1 = 4.330127018922194E9; verify_case(2, Arg1, maximalArea(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  MinimalTriangle ___test;
  ___test.run_test(-1);
}
// END CUT HERE
