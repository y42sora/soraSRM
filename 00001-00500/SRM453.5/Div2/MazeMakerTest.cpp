#include "MazeMaker.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class MazeMakerTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    MazeMaker solution;

    void testCase0() {
        string maze_[] = {"...", "...", "..."};
        vector<string> maze(maze_, maze_ + (sizeof(maze_) / sizeof(maze_[0])));
		int startRow = 0;
		int startCol = 1;
        int moveRow_[] = {1, 0, -1, 0};
        vector<int> moveRow(moveRow_, moveRow_ + (sizeof(moveRow_) / sizeof(moveRow_[0])));
        int moveCol_[] = {0, 1, 0, -1};
        vector<int> moveCol(moveCol_, moveCol_ + (sizeof(moveCol_) / sizeof(moveCol_[0])));
		int expected_ = 3;
        assertEquals(0, expected_, solution.longestPath(maze, startRow, startCol, moveRow, moveCol));
    }

    void testCase1() {
        string maze_[] = {"...", "...", "..."};
        vector<string> maze(maze_, maze_ + (sizeof(maze_) / sizeof(maze_[0])));
		int startRow = 0;
		int startCol = 1;
        int moveRow_[] = {1, 0, -1, 0, 1, 1, -1, -1};
        vector<int> moveRow(moveRow_, moveRow_ + (sizeof(moveRow_) / sizeof(moveRow_[0])));
        int moveCol_[] = {0, 1, 0, -1, 1, -1, 1, -1};
        vector<int> moveCol(moveCol_, moveCol_ + (sizeof(moveCol_) / sizeof(moveCol_[0])));
		int expected_ = 2;
        assertEquals(1, expected_, solution.longestPath(maze, startRow, startCol, moveRow, moveCol));
    }

    void testCase2() {
        string maze_[] = {"X.X", "...", "XXX", "X.X"};
        vector<string> maze(maze_, maze_ + (sizeof(maze_) / sizeof(maze_[0])));
		int startRow = 0;
		int startCol = 1;
        int moveRow_[] = {1, 0, -1, 0};
        vector<int> moveRow(moveRow_, moveRow_ + (sizeof(moveRow_) / sizeof(moveRow_[0])));
        int moveCol_[] = {0, 1, 0, -1};
        vector<int> moveCol(moveCol_, moveCol_ + (sizeof(moveCol_) / sizeof(moveCol_[0])));
		int expected_ = -1;
        assertEquals(2, expected_, solution.longestPath(maze, startRow, startCol, moveRow, moveCol));
    }

    void testCase3() {
        string maze_[] = {".......", "X.X.X..", "XXX...X", "....X..", "X....X.", "......."};
        vector<string> maze(maze_, maze_ + (sizeof(maze_) / sizeof(maze_[0])));
		int startRow = 5;
		int startCol = 0;
        int moveRow_[] = {1, 0, -1, 0, -2, 1};
        vector<int> moveRow(moveRow_, moveRow_ + (sizeof(moveRow_) / sizeof(moveRow_[0])));
        int moveCol_[] = {0, -1, 0, 1, 3, 0};
        vector<int> moveCol(moveCol_, moveCol_ + (sizeof(moveCol_) / sizeof(moveCol_[0])));
		int expected_ = 7;
        assertEquals(3, expected_, solution.longestPath(maze, startRow, startCol, moveRow, moveCol));
    }

    void testCase4() {
        string maze_[] = {"......."};
        vector<string> maze(maze_, maze_ + (sizeof(maze_) / sizeof(maze_[0])));
		int startRow = 0;
		int startCol = 0;
        int moveRow_[] = {1, 0, 1, 0, 1, 0};
        vector<int> moveRow(moveRow_, moveRow_ + (sizeof(moveRow_) / sizeof(moveRow_[0])));
        int moveCol_[] = {0, 1, 0, 1, 0, 1};
        vector<int> moveCol(moveCol_, moveCol_ + (sizeof(moveCol_) / sizeof(moveCol_[0])));
		int expected_ = 6;
        assertEquals(4, expected_, solution.longestPath(maze, startRow, startCol, moveRow, moveCol));
    }

    void testCase5() {
        string maze_[] = {"..X.X.X.X.X.X."};
        vector<string> maze(maze_, maze_ + (sizeof(maze_) / sizeof(maze_[0])));
		int startRow = 0;
		int startCol = 0;
        int moveRow_[] = {2, 0, -2, 0};
        vector<int> moveRow(moveRow_, moveRow_ + (sizeof(moveRow_) / sizeof(moveRow_[0])));
        int moveCol_[] = {0, 2, 0, -2};
        vector<int> moveCol(moveCol_, moveCol_ + (sizeof(moveCol_) / sizeof(moveCol_[0])));
		int expected_ = -1;
        assertEquals(5, expected_, solution.longestPath(maze, startRow, startCol, moveRow, moveCol));
    }


    void testCase6() {
        string maze_[] = {"X.X...XXXXX.", ".XXXX..XXXX.", "..XX.XX...XX", ".X.X...XX...", "........XX..", "..XXXX.XX.X.", "X.XX..X..XX.", "X..XX.X...XX", "..XX..XXXX.X", ".XXXXXXXXXXX", ".X.XXX.X.X..", "X..XX..XX...", "X.XX.X.XXXX.", "..X.XX.....X", "X.X.XXXX..X.", "..XXX....X..", ".XX...X..XX.", ".X.X.X.....X", "..........X.", "X.X.XX......", "...XXX.XX.XX", "X..X..XX.X.X", ".XX..XXXXXXX", "X.X.........", "X..X...XXX..", ".XX....XX..X", "....X.XXXX.X", ".XXXX..XXXX.", ".........X..", ".....X....XX", "......X.X.X.", "...X.X.X.XXX", "X.XX.XXX.XX.", ".X..X.X..X.X", "XXXX....X.X.", "X.X..XX.XXX.", "XXX.XX..X.XX", "XXX..X..X.X.", "..XXXX..X..X"};
        vector<string> maze(maze_, maze_ + (sizeof(maze_) / sizeof(maze_[0])));
		int startRow = 24;
		int startCol = 10;
        int moveRow_[] = {4, -1, 3, 0, 5, -2, 5, 0, -2, 1, 4, -1, 2, -3, 0, 0, 3, 2};
        vector<int> moveRow(moveRow_, moveRow_ + (sizeof(moveRow_) / sizeof(moveRow_[0])));
        int moveCol_[] = {-9, 6, -6, -5, -8, -7, 0, 7, -4, -4, 1, -5, 4, -4, -1, -3, -4, -9};
        vector<int> moveCol(moveCol_, moveCol_ + (sizeof(moveCol_) / sizeof(moveCol_[0])));
		int expected_ = -1;
        assertEquals(6, expected_, solution.longestPath(maze, startRow, startCol, moveRow, moveCol));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            case (4): testCase4(); break;
            case (5): testCase5(); break;
            case (6): testCase6(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }
};

int main() {
    for (int i = 0; i < 7; i++) {
        MazeMakerTest test;
        test.runTest(i);
    }
}
