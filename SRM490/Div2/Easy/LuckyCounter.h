#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class LuckyCounter {

	bool checkCounter(string str){

		if(str[0] == str[3] && str[1] == str[4]) return true;
		if(str[0] == str[1] && str[3] == str[4]) return true;
		if(str[0] == str[4] && str[1] == str[3]) return true;

		return false;
	}

	public: int countLuckyMoments(vector<string> moments) {

		int num = 0;

		FOR(i,0,moments.size()){
			if(checkCounter(moments[i]))num++;
		}
		return int(num);
	}

};
