#include "NinePuzzle.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class NinePuzzleTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    NinePuzzle solution;

    void testCase0() {
		string init = "BG*YRGRRYR";
		string goal = "BGGY*YRRRR";
		int expected_ = 0;
        assertEquals(0, expected_, solution.getMinimumCost(init, goal));
    }

    void testCase1() {
		string init = "GBBB*BGBBG";
		string goal = "RYYY*YRYYR";
		int expected_ = 9;
        assertEquals(1, expected_, solution.getMinimumCost(init, goal));
    }

    void testCase2() {
		string init = "RRBR*BRBBB";
		string goal = "BBRB*RBRRR";
		int expected_ = 1;
        assertEquals(2, expected_, solution.getMinimumCost(init, goal));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 3; i++) {
        NinePuzzleTest test;
        test.runTest(i);
    }
}
