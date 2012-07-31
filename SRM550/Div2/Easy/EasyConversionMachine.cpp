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
const double EPS = 1e-10;
#define SORT(c) sort((c).begin(),(c).end())

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

class EasyConversionMachine {
public:
  string isItPossible(string originalWord, string finalWord, int k) {
    string result;
	bool flag = true;

	REP(i, originalWord.length())
		if(originalWord[i] != finalWord[i])
			k--;
	
	if(k < 0)
		flag = false;
	else if(k % 2 != 0)
		flag = false;

	if(flag)
		return "POSSIBLE";
	else
		return "IMPOSSIBLE";
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "aababba"; string Arg1 = "bbbbbbb"; int Arg2 = 2; string Arg3 = "IMPOSSIBLE"; verify_case(0, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_1() { string Arg0 = "aabb"; string Arg1 = "aabb"; int Arg2 = 1; string Arg3 = "IMPOSSIBLE"; verify_case(1, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_2() { string Arg0 = "aaaaabaa"; string Arg1 = "bbbbbabb"; int Arg2 = 8; string Arg3 = "POSSIBLE"; verify_case(2, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_3() { string Arg0 = "aaa"; string Arg1 = "bab"; int Arg2 = 4; string Arg3 = "POSSIBLE"; verify_case(3, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_4() { string Arg0 = "aababbabaa"; string Arg1 = "abbbbaabab"; int Arg2 = 9; string Arg3 = "IMPOSSIBLE"; verify_case(4, Arg3, isItPossible(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  EasyConversionMachine ___test;
  ___test.run_test(-1);
}
// END CUT HERE
