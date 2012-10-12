#include "BunnyConverter.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class BunnyConverterTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }
    BunnyConverter solution;

    void testCase0() {
		int n = 5;
		int z = 1;
		int start = 5;
		int goal = 3;
		int expected_ = 1;
        assertEquals(0, expected_, solution.getMinimum(n, z, start, goal));
    }

    void testCase1() {
		int n = 5;
		int z = 1;
		int start = 5;
		int goal = 1;
		int expected_ = 2;
        assertEquals(1, expected_, solution.getMinimum(n, z, start, goal));
    }

    void testCase2() {
		int n = 6;
		int z = 2;
		int start = 3;
		int goal = 4;
		int expected_ = -1;
        assertEquals(2, expected_, solution.getMinimum(n, z, start, goal));
    }

    void testCase3() {
		int n = 7;
		int z = 7;
		int start = 7;
		int goal = 7;
		int expected_ = 0;
        assertEquals(3, expected_, solution.getMinimum(n, z, start, goal));
    }

    void testCase4() {
		int n = 499979;
		int z = 499979;
		int start = 499970;
		int goal = 3;
		int expected_ = 1;
        assertEquals(4, expected_, solution.getMinimum(n, z, start, goal));
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
        BunnyConverterTest test;
        test.runTest(i);
    }
}
