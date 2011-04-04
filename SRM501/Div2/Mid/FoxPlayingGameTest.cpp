#include "FoxPlayingGame.h"
#include <algorithm>
#include <cmath>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class FoxPlayingGameTest {

    static void assertEquals(int testCase, double expected, double actual) {
        double delta = max(1e-9, 1e-9 * abs(expected));
        if (abs(expected - actual) <= delta) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout.precision(24);
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    FoxPlayingGame solution;

    void testCase0() {
		int nA = 5;
		int nB = 0;
		int paramA = -1000;
		int paramB = -2000;
		double expected_ = -5.0;
        assertEquals(0, expected_, solution.theMax(nA, nB, paramA, paramB));
    }

    void testCase1() {
		int nA = 3;
		int nB = 3;
		int paramA = 2000;
		int paramB = 100;
		double expected_ = 6.0;
        assertEquals(1, expected_, solution.theMax(nA, nB, paramA, paramB));
    }

    void testCase2() {
		int nA = 4;
		int nB = 3;
		int paramA = -2000;
		int paramB = 2000;
		double expected_ = -8.0;
        assertEquals(2, expected_, solution.theMax(nA, nB, paramA, paramB));
    }

    void testCase3() {
		int nA = 5;
		int nB = 5;
		int paramA = 2000;
		int paramB = -2000;
		double expected_ = 160.0;
        assertEquals(3, expected_, solution.theMax(nA, nB, paramA, paramB));
    }

    void testCase4() {
		int nA = 50;
		int nB = 50;
		int paramA = 10000;
		int paramB = 2000;
		double expected_ = 5.62949953421312E17;
        assertEquals(4, expected_, solution.theMax(nA, nB, paramA, paramB));
    }

    void testCase5() {
		int nA = 41;
		int nB = 34;
		int paramA = 9876;
		int paramB = -1234;
		double expected_ = 515323.9982341775;
        assertEquals(5, expected_, solution.theMax(nA, nB, paramA, paramB));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            case (4): testCase4(); break;
            case (5): testCase5(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 6; i++) {
        FoxPlayingGameTest test;
        test.runTest(i);
    }
}
