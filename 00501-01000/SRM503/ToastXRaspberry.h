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


class ToastXRaspberry {

	public: int apply(int upper_limit, int layer_count) {
		int ans = 0;
		int now = 0;
		while(now < layer_count){
			now += upper_limit;
			ans++;
		}
		return int(ans);
	}

};
