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

class ColorfulCards {
	public: vector<int> theCards(int N, string colors) {
		vector<bool> prime(N+1,true);

		prime[0] = false;
		prime[1] = false;
		FOR(i,0,N+1)
			for(int j=2; j*j <= i; j++)
				if(i % j == 0)
					prime[i] = false;

		vector<int> fast(colors.size());
		vector<int> last(colors.size());

		int x = 1;
		FOR(i,0,colors.size()){
			if(colors[i] == 'R'){
				while(!prime[x])x++;
				fast[i] = x++;
			}else{
				while(prime[x])x++;
				fast[i] = x++;
			}
		}

		x = N;
		for(int i=colors.size()-1; 0 <= i; i--){
			if(colors[i] == 'R'){
				while(!prime[x])x--;
				last[i] = x--;
			}else{
				while(prime[x])x--;
				last[i] = x--;
			}
		}

		vector<int> ans;
		FOR(i,0,last.size())
			if(fast[i] == last[i])
				ans.push_back(fast[i]);
			else
				ans.push_back(-1);

		return ans;
	}
};
