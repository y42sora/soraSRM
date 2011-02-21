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

class HandsShaking {

	public: long long countPerfect(int n) {

		long long num[100];
		num[0] = 1;

		for(int i=1; i<=100; i++){
			long long n = 0;
			for(int j=0; j< i; j++){
				n += num[i-j-1] * num[j];
			}
			num[i] = n;
		}
		return num[n/2];
	}

};
