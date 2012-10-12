#include "OneDigitDifference.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class OneDigitDifferenceTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    OneDigitDifference solution;

    void testCase0() {
		int N = 9;
		int expected_ = 0;
        assertEquals(0, expected_, solution.getSmallest(N));
    }

    void testCase1() {
		int N = 0;
		int expected_ = 1;
        assertEquals(1, expected_, solution.getSmallest(N));
    }

    void testCase2() {
		int N = 900000123;
		int expected_ = 123;
        assertEquals(2, expected_, solution.getSmallest(N));
    }

    void testCase3() {
		int N = 30000;
		int expected_ = 0;
        assertEquals(3, expected_, solution.getSmallest(N));
    }

    void testCase4() {
		int N = 47;
		int expected_ = 7;
        assertEquals(4, expected_, solution.getSmallest(N));
    }

    void testCase5() {
		int N = 1907654321;
		int expected_ = 907654321;
        assertEquals(5, expected_, solution.getSmallest(N));
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
        OneDigitDifferenceTest test;
        test.runTest(i);
    }
}
