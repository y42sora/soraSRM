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

class NextOrPrev {
	bool isok(VI start_pos, VI goal_pos){
		REP(i,start_pos.size())
			REP(j,start_pos.size())
				if(i==j)
					continue;
				else if(
					start_pos[i] < start_pos[j] &&
					goal_pos[i] > goal_pos[j])
					return false;
				else if(
					start_pos[i] > start_pos[j] &&
					goal_pos[i] < goal_pos[j])
					return false;
		return true;
	}
public:
  int getMinimum(int nextCost, int prevCost, string start, string goal) {
	  VI start_pos;
	  REP(i,start.length())
		  start_pos.push_back(start[i] - 'a');

	  VI goal_pos;
	  REP(i,goal.length())
		  goal_pos.push_back(goal[i] - 'a');

	  if(!isok(start_pos, goal_pos))
		  return -1;

      int result = 0;
	  REP(i,start_pos.size()){
		  int cost = goal_pos[i] - start_pos[i];
		  if(cost < 0)
			  result += -1*cost*prevCost;
		  else
			  result += cost*nextCost;
	  }

      return result;
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 5; int Arg1 = 8; string Arg2 = "ae"; string Arg3 = "bc"; int Arg4 = 21; verify_case(0, Arg4, getMinimum(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 5; int Arg1 = 8; string Arg2 = "ae"; string Arg3 = "cb"; int Arg4 = -1; verify_case(1, Arg4, getMinimum(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 1; int Arg1 = 1; string Arg2 = "srm"; string Arg3 = "srm"; int Arg4 = 0; verify_case(2, Arg4, getMinimum(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 10; int Arg1 = 1; string Arg2 = "acb"; string Arg3 = "bdc"; int Arg4 = 30; verify_case(3, Arg4, getMinimum(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 10; int Arg1 = 1; string Arg2 = "zyxw"; string Arg3 = "vuts"; int Arg4 = 16; verify_case(4, Arg4, getMinimum(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_5() { int Arg0 = 563; int Arg1 = 440; string Arg2 = "ptrbgcnlaizo"; string Arg3 = "rtscedkiahul"; int Arg4 = 10295; verify_case(5, Arg4, getMinimum(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_6() { int Arg0 = 126; int Arg1 = 311; string Arg2 = "yovlkwpjgsna"; string Arg3 = "zpwnkytjisob"; int Arg4 = -1; verify_case(6, Arg4, getMinimum(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  NextOrPrev ___test;
  ___test.run_test(-1);
}
// END CUT HERE
