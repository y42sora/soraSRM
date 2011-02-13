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

class AnagramFree {
public:
	bool checkArray(int *a, int *b){
		for(int i=0; i<26; i++){
			if(a[i] != b[i])return false;
		}
		return true;
	}

	void checkAll(int *now, int **counts, bool *flags, int n){
		for(int i=0; i<n; i++){
			if(checkArray(now, counts[i]))
				flags[i] = false;
		}
	}

	int check(int **counts, bool *flags,int n){
		int count = 0;
		for(int i=0; i<	n; i++){
			if(flags[i]){
				count++;
				checkAll(counts[i], counts, flags, n);
			}
		}

		return count;
	}


	int getMaximumSubset(vector <string> S) {
	    int result;

		int **counts;

		counts = new int*[S.size()];
		for(int i=0; i < (int)S.size(); i++){
			counts[i] = new int[26];
			for(int j=0; j<26; j++){
				counts[i][j] = 0;
			}
		}

		bool *flags;
		flags = new bool[S.size()];
		for(int i=0; i<S.size(); i++)
			flags[i] = true;

		for(int i=0; i<S.size(); i++){
			string str = S[i];
			for(int j=0; j<str.size(); j++){
				char c = str[j];
				counts[i][c-'a']++;
			}
		}

		result = check(counts,flags,S.size());
	    return result;
	  }
};
