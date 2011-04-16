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

class OneRegister {
	int getNow(int t,string s){
		for(int i=0; i<s.size(); i++){
			if(s[i] == '*')
				t = (int)sqrt(t);
			else
				t = t / 2;
		}
		return t;
	}

	public: string getProgram(int s, int t) {
		deque<string> q;
		q.push_back("");
		string ans = ":-(";
		while(!q.empty()){
			string str = q.front();
			q.pop_front();

			int x = getNow(t,str);


			if(s == x){
				string n = string(str.rbegin(),str.rend());
				if(ans == ":-(") ans = n;
				if(n < ans && n.size() <= ans.size()) ans = n;
				continue;
			}
			if(1 == x){
				string n = "/" + string(str.rbegin(),str.rend());
				if(ans == ":-(") ans = n;
				if(n < ans && n.size() <= ans.size()) ans = n;
				continue;
			}

			int y = (int)sqrt(x);
			if(y*y == x)
				q.push_back(str + "*");

			if(x % 2 == 0)
				q.push_back(str + "+");
		}
		return ans;
	}

};
