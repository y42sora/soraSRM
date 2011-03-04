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

class BunnyExamAfter {
	public: int getMaximum(string black, string gray, string white) {
		int sum = 0;
		int len = black.size();

		FOR(i,0,len){
			if(gray[i] == white[i]){
				if(gray[i] != black[i])
					sum+=2;
			}else{
				if(gray[i] != black[i])
					sum++;
				else if(white[i] != black[i])
					sum++;
			}
		}
		return sum;
	}
};
