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

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

//4回より短ければ別処理
//4回以上なら縦横がきまるので，正しいかどうかのチェックをすればいいだけ

class RotatingBot {
public:

  int check_ok(VI moves, int w, int h)
  {
	  vector< vector <bool> > robo_map;

	  REP(i,h+2)
	  {
		  vector<bool> line;
		  line.push_back(false);
		  REP(i,w)
			  line.push_back(true);
		  line.push_back(false);
		  robo_map.push_back(line);
	  }
	  REP(i,w+2){
		  robo_map[0][i] = false;
		  robo_map[h+1][i] = false;
	  }


	  int x = w-moves[0];
	  int y = moves[1] +1;

	  robo_map[y][x] = false;

	  REP(i,moves.size())
	  {
		  switch(i%4){
		  case 0:
			  REP(j,moves[i]){
				  x++;
				  if(!robo_map[y][x])
					  return -1;
				  robo_map[y][x] = false;
			  }
			if(i != moves.size()-1)
				if(robo_map[y][x+1])
					return -1;
			  break;
		  case 1:
			  REP(j,moves[i]){
				  y--;
				  if(!robo_map[y][x])
					  return -1;
				  robo_map[y][x] = false;
			  }
					  if(i != moves.size()-1)
						if(robo_map[y-1][x])
							return -1;
			  break;

		  case 2:
			  REP(j,moves[i]){
				  x--;
				  if(!robo_map[y][x])
					  return -1;
				  robo_map[y][x] = false;
			  }
				if(i != moves.size()-1)
					if(robo_map[y][x-1])
						return -1;
			  break;

		  case 3:
			  REP(j,moves[i]){
				  y++;
				  if(!robo_map[y][x])
					  return -1;
				  robo_map[y][x] = false;
			  }
			if(i != moves.size()-1)
				if(robo_map[y+1][x])
						return -1;
			  break;
		  }

	  }
	  return w*h;
  }


  int minArea(vector <int> moves) {

	  switch(moves.size())
	  {
	  case 1:
		  return moves[0]+1;
	  case 2:
		  return (moves[0]+1)*(moves[1]+1);
	  case 3:
		  return (max(moves[2],moves[0])+1)*(moves[1]+1);
	  }

	  // 4以上

	  if(moves[2] < moves[0])
		  return -1;

	  int w = max(moves[2],moves[0])+1;
	  int h = max(moves[3],moves[1])+1;

	  int result = check_ok(moves, w,h);

    return result;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {15}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 16; verify_case(0, Arg1, minArea(Arg0)); }
	void test_case_1() { int Arr0[] = {3,10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 44; verify_case(1, Arg1, minArea(Arg0)); }
	void test_case_2() { int Arr0[] = {1,1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(2, Arg1, minArea(Arg0)); }
	void test_case_3() { int Arr0[] = {9,5,11,10,11,4,10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 132; verify_case(3, Arg1, minArea(Arg0)); }
	void test_case_4() { int Arr0[] = {12,1,27,14,27,12,26,11,25,10,24,9,23,8,22,7,21,6,20,5,19,4,18,3,17,2,16,1,15}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 420; verify_case(4, Arg1, minArea(Arg0)); }
	void test_case_5() { int Arr0[] = {8,6,6,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(5, Arg1, minArea(Arg0)); }
	void test_case_6() { int Arr0[] = {8,6,6}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 63; verify_case(6, Arg1, minArea(Arg0)); }
	void test_case_7() { int Arr0[] = {4, 5, 4, 4, 3, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 30; verify_case(7, Arg1, minArea(Arg0)); }

// END CUT HERE
};

// BEGIN CUT HERE
int main() {
  RotatingBot ___test;
  ___test.run_test(-1);
}
// END CUT HERE
