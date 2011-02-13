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

class AverageAverage {

public: double average(vector<int> numList) {


	int sum = 0;
	for(int i=0; i<numList.size(); i++)
		sum+= numList[i];
	return double((double)sum / numList.size());
	}

};
