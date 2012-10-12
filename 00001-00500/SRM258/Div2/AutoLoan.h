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

class AutoLoan {
	double doPayment(double price,double monthlyPayment,int loanTerm, double roan){
		FOR(i,0,loanTerm){
			double add = price * roan;
			price = price + add;
			price = price - monthlyPayment;
		}
		return price;
	}

	public: double interestRate(double price, double monthlyPayment, int loanTerm) {
		double EPS = 0.000000000001;
		double big = 100.0;
		double small = 0.0;

		FOR(i,0,1000){
			if(big - small < EPS) break;

			double next = (big + small) / 2.0;

			double pay = doPayment(price,monthlyPayment,loanTerm, (next / 12.0) / 100);

			if(pay < EPS)
				small = next;
			else if(EPS < pay)
				big = next;
			else
				break;
		}
		return double(big);
	}
};
