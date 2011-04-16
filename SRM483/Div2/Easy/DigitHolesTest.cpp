#include "DigitHoles.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class DigitHolesTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    DigitHoles solution;

    void testCase0() {
		int number = 42;
		int expected_ = 1;
        assertEquals(0, expected_, solution.numHoles(number));
    }

    void testCase1() {
		int number = 669;
		int expected_ = 3;
        assertEquals(1, expected_, solution.numHoles(number));
    }

    void testCase2() {
		int number = 688;
		int expected_ = 5;
        assertEquals(2, expected_, solution.numHoles(number));
    }

    void testCase3() {
		int number = 123;
		int expected_ = 0;
        assertEquals(3, expected_, solution.numHoles(number));
    }

    void testCase4() {
		int number = 456;
		int expected_ = 2;
        assertEquals(4, expected_, solution.numHoles(number));
    }

    void testCase5() {
		int number = 789;
		int expected_ = 3;
        assertEquals(5, expected_, solution.numHoles(number));
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
        DigitHolesTest test;
        test.runTest(i);
    }
}
