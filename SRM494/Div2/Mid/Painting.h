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

class Painting {

	bool drawCheck(int i,int j, int k, int **canvas, int lenw, int lenh){
		int w = i+k;
		int h = j+k;

		if(w > lenw || h > lenh) return false;

		FOR(a,i,w)
			FOR(b,j,h)
				if(canvas[a][b] == -1) return false;

		return true;
	}

	void draw(int i,int j, int k, int **canvas){
		int w = i+k;
		int h = j+k;

		FOR(a,i,w)
			FOR(b,j,h)
				canvas[a][b] = 0;
	}

	bool isAns(int **canvas,int lenw, int lenh){
		FOR(i,0,lenw)
				FOR(j,0,lenh)
					if(canvas[i][j] == 1) return false;

		return true;
	}

	public: int largestBrush(vector<string> picture) {

		int k = picture[0].size();

		int w = picture.size();
		int h = picture[0].size();

		for(; k != 0; k--){
			int **canvas = new int*[picture.size()];

			for(int i = 0; i < w; i++){
				canvas[i] = new int[picture[0].size()];
				for(int j=0;j<h; j++){
					if(picture[i][j] == 'B')
						canvas[i][j] = 1;
					else
						canvas[i][j] = -1;
				}
			}

			for(int i=0; i <= w-k; i++)
				for(int j=0;j<= h-k; j++)
					if(drawCheck(i,j,k,canvas,picture.size(), picture[0].size()))
						draw(i,j,k,canvas);

			if(isAns(canvas,w,h)) return k;
		}

		return int(0);
	}

};
