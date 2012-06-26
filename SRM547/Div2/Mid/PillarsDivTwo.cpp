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

class PillarsDivTwo {
public:
  double maximalLength(vector <int> height, int w) {
	double dp[2], newdp[2];
	dp[0] = 0.0;
	dp[1] = 0.0;

	newdp[0] = 0.0;
	newdp[1] = 0.0;

	FOR(i,1,height.size()){
		int h_now = height[i];
		int h_bef = height[i-1];

		newdp[0] = max( dp[0] + sqrt((double)(h_now-h_bef)*(h_now-h_bef) + w*w),
					 dp[1] + sqrt((double)(h_now-1)*(h_now-1) + w*w));

		newdp[1] = max( dp[0] + sqrt((double)(1-h_bef)*(1-h_bef) + w*w),
					 dp[1] + sqrt((double)(1-1)*(1-1) + w*w));

		dp[0] = newdp[0];
		dp[1] = newdp[1];
	}


    return max(dp[0],dp[1]);
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {3,3,3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; double Arg2 = 5.656854249492381; verify_case(0, Arg2, maximalLength(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {1,1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 100; double Arg2 = 300.0; verify_case(1, Arg2, maximalLength(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {100,2,100,2,100}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; double Arg2 = 396.32310051270036; verify_case(2, Arg2, maximalLength(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {2,1,1,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; double Arg2 = 3.82842712474619; verify_case(3, Arg2, maximalLength(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  PillarsDivTwo ___test;
  ___test.run_test(-1);
}
// END CUT HERE
