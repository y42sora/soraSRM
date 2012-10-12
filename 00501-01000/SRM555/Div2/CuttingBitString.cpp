#line 9 "CuttingBitString.cpp"


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


class CuttingBitString {

    LL get_b(string s){
        LL sum = 0;
        LL now = 1;
        for(int i=s.length()-1; 0 <= i; i--){
            if(s[i] == '1')
                sum += now;
            now *= 2;
        }
        return sum;
    }

    LL is_five(LL n){
        if(n == 0) return false;
        while(n != 1){
            if(n % 5 != 0)
                return false;
            n /= 5;
        }
        return true;
    }

    void check_left(int k, string s){
        if(0 == s.length()){
            if(result == -1)
                result = k;
            else
                result = min(result, k);
            return;
        }

        REP(i,s.size()+1){
            string t = s.substr(0, i);
            if(s[0] != '0')
                if(is_five(get_b(t)))
                check_left(k+1, s.substr(i));
        }
    }
    int result;


public:


  int getmin(string S) {
    result = -1;
    check_left(0,S);

    return result;
  }

  

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
