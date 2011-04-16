//include
//------------------------------------------
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

class MicrowaveSelling {
	int count9(int x){
		int num = 0;
		int big = 0;
		while(x != 0){
			if(x % 10 == 9)num++;
			else{
				return num;
				//big = max(big,num);
				//num = 0;
			}
			x = x / 10;
		}
		return big = max(big,num);
	}

	public: int mostAttractivePrice(int minPrice, int maxPrice) {
		int i = 1;
		int big = maxPrice;
		int bigNum = count9(maxPrice);
		while(i < maxPrice){
			int z = maxPrice / i;
			int x = z % 10;

			int minus = (x+1) % 10;

			maxPrice -= minus * i;
			i *= 10;

			if(minPrice <= maxPrice){
				if(bigNum < count9(maxPrice)){
					bigNum = count9(bigNum);
					big = maxPrice;
				}
			}
		}
		return int(big);
	}

};
