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
#include <fstream>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef vector<double> VD;
typedef long long LL;
const double EPS = 1e-10;
#define SORT(c) sort((c).begin(),(c).end())

class ChocolateBar {

	int get_norepeat(int x, int y, string let){
		map<char, bool> alpha;

		REP(i, y)
			if(alpha.find(let[x+i]) != alpha.end())
				return 0;
			else
				alpha[let[x+i]] = true;

		return y;
	}
public:
 	int maxLength(string letters) {
		int result = 0;

		REP(i,letters.size())
			REP(j,letters.size()-i+1)
				result = max(result, get_norepeat(i,j,letters));

		return result;
	}

	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "srm"; int Arg1 = 3; verify_case(0, Arg1, maxLength(Arg0)); }
	void test_case_1() { string Arg0 = "dengklek"; int Arg1 = 6; verify_case(1, Arg1, maxLength(Arg0)); }
	void test_case_2() { string Arg0 = "haha"; int Arg1 = 2; verify_case(2, Arg1, maxLength(Arg0)); }
	void test_case_3() { string Arg0 = "www"; int Arg1 = 1; verify_case(3, Arg1, maxLength(Arg0)); }
	void test_case_4() { string Arg0 = "thisisansrmbeforetopcoderopenfinals"; int Arg1 = 9; verify_case(4, Arg1, maxLength(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	ChocolateBar ___test;
	___test.run_test(-1);
}
// END CUT HERE
