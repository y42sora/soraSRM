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


//typedef
//------------------------------------------
typedef vector<string> VS;


//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

class TxMsg {
	vector<string> split(string str, string sp){
		vector<string> s;
		int start = 0;

		while(str.find_first_of(sp,start) != str.npos){
			int end = str.find_first_of(sp,start);
			s.push_back(str.substr(start,end-start));
			start = end + sp.size();
		}
		s.push_back(str.substr(start,str.size()-start));

		return s;
	}

	bool isV(string word){
		REP(i,word.size()){
			if(
					word[i] != 'a' &&
					word[i] != 'e' &&
					word[i] != 'i' &&
					word[i] != 'o' &&
					word[i] != 'u'
							)
				return false;
		}
		return true;
	}

	string getWords(string word){
		string ans = "";
		bool flag = true;
		REP(i,word.size()){
			if(
					word[i] == 'a' ||
					word[i] == 'e' ||
					word[i] == 'i' ||






					word[i] == 'o' ||
					word[i] == 'u'
							){
				flag = true;
				continue;
			}

			if(flag){
				ans = ans + word[i];
				flag = false;
			}
		}
		return ans;
	}

	public: string getMessage(string original) {
		VS words = split(original," ");

		string ans = "";

		REP(i,words.size()){
			if(isV(words[i]))
				ans = ans + " " + words[i];
			else
				ans = ans + " " + getWords(words[i]);
		}
		return string(ans.substr(1,ans.size()));
	}

};
