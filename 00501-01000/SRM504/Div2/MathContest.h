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

class MathContest {

	public: int countBlack(string ballSequence, int repetitions) {
		vector<bool> gets;
		FOR(i,0,ballSequence.size())
			if(ballSequence[i] == 'W')
				gets.push_back(true);
			else
				gets.push_back(false);

		vector<bool> bolls;
		FOR(i,0,repetitions)
			FOR(j,0,gets.size())
				bolls.push_back(gets[j]);

		int num = 0;
		bool flag = true;
		bool flip = false;
		int count = 0;

		int now = 0;
		int last = bolls.size()-1;

		while( count < bolls.size()){
			count++;
			if(flag){
				if(!flip){
					if(bolls[now]){
						flag = false;
					}else{
						flip = true;
						num++;
					}
				}else{
					if(bolls[now]){
						flip = false;
						num++;
					}else{
						flag = false;
					}
				}
				now++;
			}else{
				if(!flip){
					if(bolls[last]){
						flag = true;
					}else{
						flip = true;
						num++;
					}
				}else{
					if(bolls[last]){
						flip = false;
						num++;
					}else{
						flag = true;
					}
				}
				last--;
			}
		}

		return int(num);
	}

};
