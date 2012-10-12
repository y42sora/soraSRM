#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i <= int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class ColorfulTilesEasy {
	public: int theMin(string room) {
		int num = 0;
		FOR(i,0,room.size()-1){
			if(room[i] == room[i+1]){
				num++;
				i++;
			}
		}
		return num;
	}

};

