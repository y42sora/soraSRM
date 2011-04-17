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

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
const double EPS = 1e-10;
#define SORT(c) sort((c).begin(),(c).end())

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

class UnionFind {
public:
  vector<int> data;
  UnionFind(int size){
	  REP(i,size)
		data.push_back(-1);
  }
  bool unionSet(int x, int y) {
    x = root(x);
    y = root(y);
    if (x != y) {
      if (data[y] < data[x]){
    	  int temp = x;
    	  x = y;
    	  y = temp;
      }
      data[x] += data[y];
      data[y] = x;
    }
    return x != y;
  }
  bool findSet(int x, int y) {
    return root(x) == root(y);
  }
  int root(int x) {
    return data[x] < 0 ? x : data[x] = root(data[x]);
  }
  int size(int x) {
    return -data[root(x)];
  }
};
class edge{
public:
	int s;
	int e;
	double l;
	edge(int start,int end,double length){
		s = start;
		e = end;
		l = length;
	}
};

class KingdomXCitiesandVillagesAnother {
	double getLength(int a,int b,int c,int d){
		LL x = c-a;
		LL y = b-d;
		return sqrt(x*x+y*y);
	}
	class SmallSort{
	public:
		bool operator()(const edge& left, const edge& right) const{
			return left.l < right.l;
		}
	};

	public: double determineLength(vector<int> cityX, vector<int> cityY, vector<int> villageX, vector<int> villageY) {
		vector<edge> roads;
		int cityNum = cityX.size();
		REP(i,cityX.size()-1){
			roads.push_back(edge(i,i+1,0));
		}

		REP(i,cityX.size())
			REP(j,villageX.size())
				roads.push_back(edge(i,cityNum+j,getLength(cityX[i],cityY[i],villageX[j],villageY[j])));

		REP(i,villageX.size())
			FOR(j,i+1,villageY.size())
				roads.push_back(edge(cityNum+i,cityNum+j,getLength(villageX[i],villageY[i],villageX[j],villageY[j])));

		sort(roads.begin(),roads.end(),SmallSort());

		double ans = 0.0;
		UnionFind u = UnionFind(cityNum + villageX.size());

		REP(i,roads.size()){
			edge e = roads[i];
			if(!u.findSet(e.s,e.e)){
				ans += e.l;
				u.unionSet(e.s,e.e);
			}
		}
		return double(ans);
	}
};
