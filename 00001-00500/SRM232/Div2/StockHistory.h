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
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

class StockHistory {
	vector<string> split(string str, string sp){
		vector<string> s;
		int start = 0;

		while(str.find_first_of(sp,start) != str.npos){
			int end = str.find_first_of(sp,start);
			s.push_back(str.substr(start,end-start));
			start = end + sp.size();
		}
		s.push_back(str.substr(start,str.size()-start));

		return s;
	}

	public: int maximumEarnings(int initialInvestment, int monthlyContribution, vector<string> stockPrices) {
		double first = initialInvestment;
		double month = monthlyContribution;

		vector<vector<int> > stocks;
		FOR(i,0,stockPrices.size()){
			vector<string> s = split(stockPrices[i]," ");
			vector<int> stock;
			FOR(j,0,s.size())
				stock.push_back(toInt(s[j]));
			stocks.push_back(stock);
		}

		vector<vector<double> > income;
		FOR(i,0,stocks.size()){
			vector<double> inMonth;
			FOR(j,0,stocks[i].size()){
				inMonth.push_back((double)stocks[stocks.size()-1][j] / (double)stocks[i][j]);
			}
			income.push_back(inMonth);
		}

		vector<double> buy;
		FOR(i,0,income.size()){
			double big = -1;
			FOR(j,0,income[i].size()){
				big = max(big,income[i][j]);
			}
			buy.push_back(big);
		}

		double get = 0.0;

		first -= month;
		FOR(i,0,buy.size()-1){
			first += month;

			double big = -1.0;
			FOR(j,i,buy.size()){
				big = max(big,buy[j]);
			}

			if(big == buy[i] && 0 < big){
				int x = 0;
				for(x = 0; x < income.size(); x++){
					if(income[i][x] == big)
						break;
				}

				double buyNum = (first/(double)stocks[i][x]);
				double sellNum = (double)stocks[stocks.size()-1][x] * buyNum;
				get += sellNum - first;
				first = 0;
			}
		}

		return int(get+0.5);
	}
};
