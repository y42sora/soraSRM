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

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



class AfraidOfEven {
	int isAr(vector<int> seq){
		int x = seq[1] - seq[0];

		FOR(i,1,seq.size())
			if(seq[i-1] + x != seq[i])
				return i;
		return -1;
	}

	public: vector<int> restoreProgression(vector<int> seq) {
		vector<int> temp;
		FOR(i,0,seq.size())
			temp.push_back(seq[i]);
		int two = seq[1];

		int i = isAr(temp);
		while(i != -1){
			int x = temp[1] - temp[0];

			if(temp[i] <= temp[i-1] + x)
				temp[i] = temp[i] *  2;
			else{
				seq[1] = seq[1] * 2;
				if(1000 < seq[1]){
					seq[1] = two;
					seq[0] = seq[0] * 2;
				}
				temp.clear();
				FOR(i,0,seq.size())
					temp.push_back(seq[i]);
			}
			i = isAr(temp);
		}
		return vector<int>(temp);
	}

};
