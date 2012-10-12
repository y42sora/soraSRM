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

class ColorfulBoxesAndBalls {

	public: int getMaximum(int numRed, int numBlue, int onlyRed, int onlyBlue, int bothColors) {

		int max1 = numRed * onlyRed + numBlue * onlyBlue;

		int change = min(numRed, numBlue);

		int max2 = (numRed - change) * onlyRed + (numBlue - change) * onlyBlue + change*2*bothColors;

		int big = max(max1,max2);
		return int(big);
	}

};
