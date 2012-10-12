#include "TheBoredomDivTwo.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class TheBoredomDivTwoTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    TheBoredomDivTwo solution;

    void testCase0() {
		int n = 1;
		int m = 1;
		int j = 1;
		int b = 2;
		int expected_ = 2;
        assertEquals(0, expected_, solution.find(n, m, j, b));
    }

    void testCase1() {
		int n = 2;
		int m = 1;
		int j = 1;
		int b = 2;
		int expected_ = 2;
        assertEquals(1, expected_, solution.find(n, m, j, b));
    }

    void testCase2() {
		int n = 1;
		int m = 2;
		int j = 3;
		int b = 2;
		int expected_ = 3;
        assertEquals(2, expected_, solution.find(n, m, j, b));
    }

    void testCase3() {
		int n = 4;
		int m = 7;
		int j = 7;
		int b = 4;
		int expected_ = 5;
        assertEquals(3, expected_, solution.find(n, m, j, b));
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
        TheBoredomDivTwoTest test;
        test.runTest(i);
    }
}
