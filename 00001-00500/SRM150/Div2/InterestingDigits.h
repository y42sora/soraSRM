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

class InterestingDigits {

	int getBai(int x,int base){
		int num = 0;
		while(x > 0){
			num += x % base;
			x = x / base;
		}
		return num;
	}

	bool check(int n,int base){
		int k = 1;

		while( n * k < 1000){
			int x = getBai(n*k,base);
			if(x % n!= 0) return false;
			k++;
		}
		return true;
	}

	public: vector<int> digits(int base) {

		vector<int> ans;

		for(int i=2; i<1000; i++)
			if(check(i,base))
				ans.push_back(i);

		return ans;
	}

};
