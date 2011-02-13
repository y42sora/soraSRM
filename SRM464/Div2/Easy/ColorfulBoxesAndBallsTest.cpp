#include "ColorfulBoxesAndBalls.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class ColorfulBoxesAndBallsTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    ColorfulBoxesAndBalls solution;

    void testCase0() {
		int numRed = 2;
		int numBlue = 3;
		int onlyRed = 100;
		int onlyBlue = 400;
		int bothColors = 200;
		int expected_ = 1400;
        assertEquals(0, expected_, solution.getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors));
    }

    void testCase1() {
		int numRed = 2;
		int numBlue = 3;
		int onlyRed = 100;
		int onlyBlue = 400;
		int bothColors = 300;
		int expected_ = 1600;
        assertEquals(1, expected_, solution.getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors));
    }

    void testCase2() {
		int numRed = 5;
		int numBlue = 5;
		int onlyRed = 464;
		int onlyBlue = 464;
		int bothColors = 464;
		int expected_ = 4640;
        assertEquals(2, expected_, solution.getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors));
    }

    void testCase3() {
		int numRed = 1;
		int numBlue = 4;
		int onlyRed = 20;
		int onlyBlue = -30;
		int bothColors = -10;
		int expected_ = -100;
        assertEquals(3, expected_, solution.getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors));
    }

    void testCase4() {
		int numRed = 9;
		int numBlue = 1;
		int onlyRed = -1;
		int onlyBlue = -10;
		int bothColors = 4;
		int expected_ = 0;
        assertEquals(4, expected_, solution.getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            case (4): testCase4(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 5; i++) {
        ColorfulBoxesAndBallsTest test;
        test.runTest(i);
    }
}
