#include "CrazyBot.h"
#include <algorithm>
#include <cmath>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class CrazyBotTest {

    static void assertEquals(int testCase, double expected, double actual) {
        double delta = max(1e-9, 1e-9 * abs(expected));
        if (abs(expected - actual) <= delta) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout.precision(24);
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    CrazyBot solution;

    void testCase0() {
		int n = 1;
		int east = 25;
		int west = 25;
		int south = 25;
		int north = 25;
		double expected_ = 1.0;
        assertEquals(0, expected_, solution.getProbability(n, east, west, south, north));
    }

    void testCase1() {
		int n = 2;
		int east = 25;
		int west = 25;
		int south = 25;
		int north = 25;
		double expected_ = 0.75;
        assertEquals(1, expected_, solution.getProbability(n, east, west, south, north));
    }

    void testCase2() {
		int n = 7;
		int east = 50;
		int west = 0;
		int south = 0;
		int north = 50;
		double expected_ = 1.0;
        assertEquals(2, expected_, solution.getProbability(n, east, west, south, north));
    }

    void testCase3() {
		int n = 14;
		int east = 50;
		int west = 50;
		int south = 0;
		int north = 0;
		double expected_ = 1.220703125E-4;
        assertEquals(3, expected_, solution.getProbability(n, east, west, south, north));
    }

    void testCase4() {
		int n = 14;
		int east = 25;
		int west = 25;
		int south = 25;
		int north = 25;
		double expected_ = 0.008845493197441101;
        assertEquals(4, expected_, solution.getProbability(n, east, west, south, north));
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
        CrazyBotTest test;
        test.runTest(i);
    }
}
