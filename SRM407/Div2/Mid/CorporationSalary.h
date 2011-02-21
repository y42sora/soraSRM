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

class CorporationSalary {

	long long *money;


	long long getMoney(int n,vector<string> relations){

		if(money[n] != -1) return money[n];

		long long salary = 0;

		FOR(i,0,relations[n].size()){
			if(relations[n][i] == 'Y'){
				salary += getMoney(i,relations);
			}
		}

		if(salary == 0) salary = 1;

		money[n] = salary;
		return salary;
	}

	public: long long totalSalary(vector<string> relations) {

		long long ans = 0;
		money = new long long[relations.size()];

		FOR(i,0,relations.size())
			money[i] = -1;

		FOR(i,0,relations.size())
			ans += getMoney(i,relations);

		return ans;
	}

};
