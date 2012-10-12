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

class ConsecutiveNumbers {
	public: vector<int> missingNumber(vector<int> numbers) {
		SORT(numbers);
		VI ans;
		REP(i,numbers.size()-1){
			if(numbers[i]+1 == numbers[i+1])
				continue;
			if(numbers[i]+2 != numbers[i+1]){
				ans.clear();
				return ans;
			}
			ans.push_back(numbers[i]+1);
		}
		if(ans.size() == 1)
			return ans;
		if(1 < ans.size()){
			ans.clear();
			return ans;
		}

		if(numbers[0] != 1)
			ans.push_back(numbers[0]-1);
		ans.push_back(numbers[numbers.size()-1]+1);
		return ans;
	}
};
