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
typedef vector<bool> VB;
typedef pair<int, int> PII;
typedef long long LL;
const double EPS = 1e-10;
#define SORT(c) sort((c).begin(),(c).end())

class IncubatorEasy {
public:
  int maxMagicalGirls(vector <string> love) {
    int result = 0;

    VB magicgirls;
    VB protects;
    deque<int> tempgirls;

    for(int magicnum = 0; magicnum <= 1 << love.size(); magicnum++){
    	magicgirls.clear();
    	protects.clear();
    	magicgirls.resize (love.size(), false );
    	protects.resize (love.size(), false );
  
    	for(int i=0; i < 10; i++)
    		if( 1 << i & magicnum)
    			magicgirls[i] = true;

  		REP(i,magicgirls.size())
  		  if(magicgirls[i])
          REP(j,love.size())
            if(love[i][j] == 'Y')
              tempgirls.push_back(j);

		  while(!tempgirls.empty()){
		  	int now_girl = tempgirls.front();
		  	tempgirls.pop_front();

		  	if(protects[now_girl])
		  		continue;

        protects[now_girl] = true;

		  	REP(i,love.size())
		  	  if(love[now_girl][i] == 'Y')
		  	  	if(!protects[i])
		  	  		tempgirls.push_back(i);
		  }

		  int sum = 0;
		  REP(i,magicgirls.size())
		    if(magicgirls[i])
		    	if(!protects[i])
		    		sum++;

		  result = max(result, sum);
  	}
    return result;
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"NY","NN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, maxMagicalGirls(Arg0)); }
	void test_case_1() { string Arr0[] = {"NYN", "NNY", "NNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, maxMagicalGirls(Arg0)); }
	void test_case_2() { string Arr0[] = {"NNYNN","NNYNN","NNNYY","NNNNN","NNNNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, maxMagicalGirls(Arg0)); }
	void test_case_3() { string Arr0[] = {"NNNNN","NYNNN","NYNYN","YNYNN","NNNNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(3, Arg1, maxMagicalGirls(Arg0)); }
	void test_case_4() { string Arr0[] = {"NNNNN","NNNNN","NNNNN","NNNNN","NNNNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(4, Arg1, maxMagicalGirls(Arg0)); }
	void test_case_5() { string Arr0[] = {"Y"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(5, Arg1, maxMagicalGirls(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  IncubatorEasy ___test;
  ___test.run_test(-1);
}
// END CUT HERE
