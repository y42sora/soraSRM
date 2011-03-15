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

class PermutationSignature {
	class BigSort{
	public:
		bool operator()(const int& left, const int& right) const{
			return left > right;
		}
	};

	vector<string> splitNotDel(string str, string sp){
		vector<string> s;
		int start = 0;

		while(str.find_first_of(sp,start) != str.npos){
			int end = str.find_first_of(sp,start);
			if(end != start)
				s.push_back(str.substr(start,end-start));
			s.push_back(sp);
			start = end + sp.size();
		}
		if(str.size() != start)
			s.push_back(str.substr(start,str.size()-start));

		return s;
	}

	public: vector<int> reconstruct(string signature) {
		vector<int> ans;
		FOR(i,0,signature.size()+1)
			ans.push_back(i+1);

		vector<string> len = splitNotDel(signature,"I");

		int now = 0;
		FOR(i,0,len.size()){
			if(len[i] != "I"){
				sort(ans.begin()+now, ans.begin()+1+now+len[i].size(), BigSort());
				now += len[i].size();
			}else{
				now++;
			}
		}

		return ans;
	}
};
