#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i < int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class FoxSequence {

	bool isUp(int first,int end,vector<int> seq){
		int x = seq[first+1] - seq[first];

		FOR(i,first,end)
			if(seq[i+1] - seq[i] != x)
				return false;

		if(x <= 0) return false;
		return true;
	}

	bool isDown(int first,int end,vector<int> seq){
		int x = seq[first+1] - seq[first];

		FOR(i,first,end)
			if(seq[i+1] - seq[i] != x)
				return false;

		if(0 <= x) return false;
		return true;
	}

	bool isEq(int first,int end,vector<int> seq){
		FOR(i,0,end)
			if(seq[first + i] != seq[first + i+1])
				return false;

		return true;
	}

	bool isOk(int first,int end,vector<int> seq){
		FOR(i,1,end-first)
			if(isUp(first,first+i,seq))
				if(isDown(first+i,end,seq))
					return true;
		return false;
	}

	public: string isValid(vector<int> seq) {
		FOR(i,1,seq.size())
			FOR(j,0,seq.size()-i)
				if(isOk(0,i,seq))
					if(isOk(i+j,seq.size()-1,seq))
						if(isEq(i,j,seq))
							return "YES";
		return "NO";
	}
};
