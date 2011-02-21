#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class TimeTravellingGardener {

	int getNum(int one,int two, int *len, vector<int> height){
		int x = len[two] - len[one];
		int y = height[two] - height[one];
		int num = 0;

		FOR(i,0,height.size()){
			int left = height[i] * x;
			int right = y * (len[i] - len[one]) + height[one] * x;

			if(right < 0)
				return -1;
			if(left < right)
				return -1;
			if(left > right)
				num++;
		}

		return num;
	}

	public: int determineUsage(vector<int> distance, vector<int> height) {
		int *len = new int[height.size()];

		len[0] = 0;
		for(int i=0; i<distance.size();i++){
			len[i+1] = len[i] + distance[i];
		}

		int num = height.size()-1;
		int now = 0;

		FOR(i,0,height.size())
			FOR(j,i+1,height.size())
				if( (now = getNum(i,j,len,height)) != -1)
					num = min(num, now);

		return int(num);
	}
};
