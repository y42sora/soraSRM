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

const double EPS = 1e-10;
#define SORT(c) sort((c).begin(),(c).end())

class ToastXToast {

	public: int bake(vector<int> undertoasted, vector<int> overtoasted) {
		SORT(undertoasted);
		SORT(overtoasted);
		if(overtoasted[overtoasted.size()-1] <= undertoasted[undertoasted.size()-1])
			return -1;
		if(overtoasted[0] <= undertoasted[0])
			return -1;
		if(undertoasted[undertoasted.size()-1] < overtoasted[0])
			return 1;

		return int(2);
	}

};
