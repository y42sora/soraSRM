#include "AdditionGame.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class AdditionGameTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    AdditionGame solution;

    void testCase0() {
		int A = 3;
		int B = 4;
		int C = 5;
		int N = 3;
		int expected_ = 13;
        assertEquals(0, expected_, solution.getMaximumPoints(A, B, C, N));
    }

    void testCase1() {
		int A = 1;
		int B = 1;
		int C = 1;
		int N = 8;
		int expected_ = 3;
        assertEquals(1, expected_, solution.getMaximumPoints(A, B, C, N));
    }

    void testCase2() {
		int A = 3;
		int B = 5;
		int C = 48;
		int N = 40;
		int expected_ = 1140;
        assertEquals(2, expected_, solution.getMaximumPoints(A, B, C, N));
    }

    void testCase3() {
		int A = 36;
		int B = 36;
		int C = 36;
		int N = 13;
		int expected_ = 446;
        assertEquals(3, expected_, solution.getMaximumPoints(A, B, C, N));
    }

    void testCase4() {
		int A = 8;
		int B = 2;
		int C = 6;
		int N = 13;
		int expected_ = 57;
        assertEquals(4, expected_, solution.getMaximumPoints(A, B, C, N));
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
        AdditionGameTest test;
        test.runTest(i);
    }
}
