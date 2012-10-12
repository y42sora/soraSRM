// BEGIN CUT HERE


#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// END CUT HERE
#line 9 "XorBoardDivTwo.cpp"


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
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef vector<double> VD;
typedef long long LL;
const double EPS = 1e-10;
#define SORT(c) sort((c).begin(),(c).end())


class XorBoardDivTwo {

    int calc_one(VVB b){
        int num = 0;
        REP(i,b.size())
            REP(j,b[i].size())
                if(b[i][j])
                    num++;
        return num;
    }  

    int solv_c(int c, VVB b){
        REP(i,b.size()){
            b[i][c] = !b[i][c];
        }
        int res = calc_one(b);
        REP(i,b.size()){
            b[i][c] = !b[i][c];
        }
        
        return(res);
    }

    int solv_r(int r,int c, VVB b){
        REP(i,b[r].size()){
            b[r][i] = !b[r][i];
        }
        int res = solv_c(c,b);

        REP(i,b[r].size()){
            b[r][i] = !b[r][i];
        }
        return(res);
    }

public:
  int theMax(vector <string> board) {
    VVB all;
    REP(i,board.size()){
        VB line;
        REP(j,board[i].size()){
            if(board[i][j] == '0')
                line.push_back(false);
            else
                line.push_back(true);
        }
        all.push_back(line);
    }


    int result = 0;
    REP(i,board.size())
        REP(j,board[i].size())
            result = max(result, solv_r(i,j,all));
    return result;
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"101",
 "010",
 "101"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 9; verify_case(0, Arg1, theMax(Arg0)); }
	void test_case_1() { string Arr0[] = {"111",
 "111",
 "111"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(1, Arg1, theMax(Arg0)); }
	void test_case_2() { string Arr0[] = {"0101001",
 "1101011"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 9; verify_case(2, Arg1, theMax(Arg0)); }
	void test_case_3() { string Arr0[] = {"000",
 "001",
 "010",
 "011",
 "100",
 "101",
 "110",
 "111"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 15; verify_case(3, Arg1, theMax(Arg0)); }
	void test_case_4() { string Arr0[] = {"000000000000000000000000",
 "011111100111111001111110",
 "010000000100000001000000",
 "010000000100000001000000",
 "010000000100000001000000",
 "011111100111111001111110",
 "000000100000001000000010",
 "000000100000001000000010",
 "000000100000001000000010",
 "011111100111111001111110",
 "000000000000000000000000"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 105; verify_case(4, Arg1, theMax(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  XorBoardDivTwo ___test;
  ___test.run_test(-1);
}
// END CUT HERE
