#include "FoxMakingDiceEasy.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class FoxMakingDiceEasyTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    FoxMakingDiceEasy solution;

    void testCase0() {
		int N = 6;
		int K = 7;
		int expected_ = 2;
        assertEquals(0, expected_, solution.theCount(N, K));
    }

    void testCase1() {
		int N = 5;
		int K = 7;
		int expected_ = 0;
        assertEquals(1, expected_, solution.theCount(N, K));
    }

    void testCase2() {
		int N = 50;
		int K = 1;
		int expected_ = 105800;
        assertEquals(2, expected_, solution.theCount(N, K));
    }

    void testCase3() {
		int N = 31;
		int K = 46;
		int expected_ = 504;
        assertEquals(3, expected_, solution.theCount(N, K));
    }

    void testCase4() {
		int N = 10;
		int K = 10;
		int expected_ = 48;
        assertEquals(4, expected_, solution.theCount(N, K));
    }

    void testCase5() {
    		int N = 16;
    		int K = 49;
    		int expected_ = 0;
            assertEquals(5, expected_, solution.theCount(N, K));
        }

    void testCase6() {
    		int N = 1;
    		int K = 1;
    		int expected_ = 0;
            assertEquals(6, expected_, solution.theCount(N, K));
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
        FoxMakingDiceEasyTest test;
        test.runTest(i);
    }
}
