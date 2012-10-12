#include "RabbitNumber.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class RabbitNumberTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    RabbitNumber solution;

    void testCase0() {
		int low = 22;
		int high = 22;
		int expected_ = 1;
        assertEquals(0, expected_, solution.theCount(low, high));
    }

    void testCase1() {
		int low = 484;
		int high = 484;
		int expected_ = 0;
        assertEquals(1, expected_, solution.theCount(low, high));
    }

    void testCase2() {
		int low = 1;
		int high = 58;
		int expected_ = 12;
        assertEquals(2, expected_, solution.theCount(low, high));
    }

    void testCase3() {
		int low = 58;
		int high = 484;
		int expected_ = 24;
        assertEquals(3, expected_, solution.theCount(low, high));
    }

    void testCase4() {
		int low = 1000000000;
		int high = 1000000000;
		int expected_ = 1;
        assertEquals(4, expected_, solution.theCount(low, high));
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
        RabbitNumberTest test;
        test.runTest(i);
    }
}
