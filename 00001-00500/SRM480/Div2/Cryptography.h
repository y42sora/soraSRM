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

class Cryptography {


	public: long long encrypt(vector<int> numbers) {


		long long big = -1;

		for(int i=0; i<numbers.size(); i++){
			long long cal = 1;
			for(int j=0; j<numbers.size(); j++){
				if(j != i)
					cal = cal * numbers[j];
				else
					cal = cal * (numbers[j] + 1);
			}
			big = max(big,cal);
		}

		return big;

	}

};
