#include "MicrowaveSelling.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class MicrowaveSellingTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    MicrowaveSelling solution;

    void testCase0() {
		int minPrice = 460;
		int maxPrice = 680;
		int expected_ = 599;
        assertEquals(0, expected_, solution.mostAttractivePrice(minPrice, maxPrice));
    }

    void testCase1() {
		int minPrice = 10;
		int maxPrice = 1000;
		int expected_ = 999;
        assertEquals(1, expected_, solution.mostAttractivePrice(minPrice, maxPrice));
    }

    void testCase2() {
		int minPrice = 1255;
		int maxPrice = 2999;
		int expected_ = 2999;
        assertEquals(2, expected_, solution.mostAttractivePrice(minPrice, maxPrice));
    }

    void testCase3() {
		int minPrice = 20;
		int maxPrice = 25;
		int expected_ = 25;
        assertEquals(3, expected_, solution.mostAttractivePrice(minPrice, maxPrice));
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
        MicrowaveSellingTest test;
        test.runTest(i);
    }
}
