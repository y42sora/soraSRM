#include "DreamingAboutCarrots.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class DreamingAboutCarrotsTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    DreamingAboutCarrots solution;

    void testCase0() {
		int x1 = 1;
		int y1 = 1;
		int x2 = 5;
		int y2 = 5;
		int expected_ = 3;
        assertEquals(0, expected_, solution.carrotsBetweenCarrots(x1, y1, x2, y2));
    }

    void testCase1() {
		int x1 = 0;
		int y1 = 0;
		int x2 = 1;
		int y2 = 1;
		int expected_ = 0;
        assertEquals(1, expected_, solution.carrotsBetweenCarrots(x1, y1, x2, y2));
    }

    void testCase2() {
		int x1 = 50;
		int y1 = 48;
		int x2 = 0;
		int y2 = 0;
		int expected_ = 1;
        assertEquals(2, expected_, solution.carrotsBetweenCarrots(x1, y1, x2, y2));
    }

    void testCase3() {
		int x1 = 0;
		int y1 = 0;
		int x2 = 42;
		int y2 = 36;
		int expected_ = 5;
        assertEquals(3, expected_, solution.carrotsBetweenCarrots(x1, y1, x2, y2));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 4; i++) {
        DreamingAboutCarrotsTest test;
        test.runTest(i);
    }
}
