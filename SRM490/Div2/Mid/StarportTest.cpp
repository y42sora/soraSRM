#include "Starport.h"
#include <algorithm>
#include <cmath>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class StarportTest {

    static void assertEquals(int testCase, double expected, double actual) {
        double delta = max(1e-9, 1e-9 * abs(expected));
        if (abs(expected - actual) <= delta) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout.precision(24);
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    Starport solution;

    void testCase0() {
		int N = 4;
		int M = 2;
		double expected_ = 1.0;
        assertEquals(0, expected_, solution.getExpectedTime(N, M));
    }

    void testCase1() {
		int N = 5;
		int M = 3;
		double expected_ = 2.0;
        assertEquals(1, expected_, solution.getExpectedTime(N, M));
    }

    void testCase2() {
		int N = 6;
		int M = 1;
		double expected_ = 2.5;
        assertEquals(2, expected_, solution.getExpectedTime(N, M));
    }

    void testCase3() {
		int N = 12345;
		int M = 2345;
		double expected_ = 6170.0;
        assertEquals(3, expected_, solution.getExpectedTime(N, M));
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
        StarportTest test;
        test.runTest(i);
    }
}
