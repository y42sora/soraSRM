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

class AmoebaDivTwo {

	int checkTate(int x,int y,int K, vector<string> &table){
		if(table.size() < x+K) return 0;

		for(int i=0; i<K; i++){
			if(table[x+i][y] == 'M') return 0;
		}

		return 1;
	}

	int checkYoko(int x,int y,int K, vector<string> &table){
		if(table[x].size() < y+K) return 0;

		for(int i=0; i<K; i++){
			if(table[x][y+i] == 'M') return 0;
		}

		return 1;
	}

	int check(int x,int y,int K, vector<string> &table){
		int num = 0;

		num += checkYoko(x,y,K,table);
		if(K!=1)
			num += checkTate(x,y,K,table);
		return num;
	}



	public: int count(vector<string> table, int K) {
		int num = 0;

		for(int i=0; i<table.size(); i++)
			for(int j=0; j<table[i].size(); j++)
				if(table[i][j] == 'A')
					num += check(i,j,K,table);


		return int(num);
	}

};
