#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class MazeMaker {
private:
	class Point{
	public:
		int x;
		int y;
		Point(int xi, int yi){
			x = xi;
			y = yi;
		}
	};
	public: int longestPath(vector<string> maze, int startRow, int startCol, vector<int> moveRow, vector<int> moveCol) {
		int h = maze.size();
		int w = maze[0].size();
		int big = -1;

		vector<vector<int> > map;

		FOR(i,0,h){
			vector<int> line;
			FOR(j,0,w){
				if(maze[i][j] == 'X')
					line.push_back(0);
				else
					line.push_back(10000);
			}
			map.push_back(line);
		}

		vector<Point> points;
		points.push_back(Point(startRow,startCol));
		map[startRow][startCol] = 0;

		FOR(k,0,points.size()){
			Point p = points[k];

			FOR(i,0,moveRow.size()){
				int newx = p.x + moveRow[i];
				int newy = p.y + moveCol[i];
				if(0 <= newx && newx < h && 0 <= newy && newy < w){
					if(map[newx][newy] == 10000){
						map[newx][newy] = map[p.x][p.y]+1;
						points.push_back(Point(newx,newy));
					}
				}
			}
		}
		FOR(i,0,h)
			FOR(j,0,w)
				big = max(big,map[i][j]);

		if(big == 10000)
			return -1;
		return int(big);
	}
};
