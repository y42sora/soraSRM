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

class ColoredStrokes {

	void checkB(int x,int y,vector<string> &picture){
		if(picture.size() <= x) return;
		if(picture[x].size() <= y) return;



		if(picture[x][y] == 'G'){
			picture[x][y] = 'R';
			checkB(x+1,y,picture);
		}
		if(picture[x][y] == 'B'){
			picture[x][y] = '.';
			checkB(x+1,y,picture);
		}
		return;
	}

	void checkR(int x,int y,vector<string> &picture){
		if(picture.size() <= x) return;
		if(picture[x].size() <= y) return;

		if(picture[x][y] == 'G'){
			picture[x][y] = 'B';
			checkR(x,y+1,picture);
		}
		if(picture[x][y] == 'R'){
			picture[x][y] = '.';
			checkR(x,y+1,picture);
		}

		return;
	}

	int num;

	void check(int x,int y,vector<string> &picture){
		if(picture[x][y] == 'R'){
			checkR(x,y,picture);
			num++;
			return;
		}
		if(picture[x][y] == 'B'){
			checkB(x,y,picture);
			num++;
			return;
		}
		if(picture[x][y] == 'G'){
			checkR(x,y,picture);
			checkB(x,y,picture);
			num++;
			num++;
			return;
		}

		return ;
	}



	public: int getLeast(vector<string> picture) {
		num = 0;

		for(int i=0; i<picture.size(); i++)
			for(int j=0; j<picture[i].size(); j++)
				check(i,j,picture);

		return num;
	}
};
