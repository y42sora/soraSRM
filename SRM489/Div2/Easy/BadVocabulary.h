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

class BadVocabulary {

	public: int count(string badPrefix, string badSuffix, string badSubstring, vector<string> vocabulary) {
		int num = 0;

		FOR(i,0,vocabulary.size()){

			string str = vocabulary[i];
			string sub = str.substr(1,str.size() -2);
			if(str.find(badPrefix) == 0) num++;
			else if(str.rfind(badSuffix)+badSuffix.size() == str.size()) num++;
			else if(sub.find(badSubstring)!= string::npos) num++;


		}
		return int(num);
	}

};
