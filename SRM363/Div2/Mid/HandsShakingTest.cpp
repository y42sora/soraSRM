#include "HandsShaking.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class HandsShakingTest {

    static void assertEquals(int testCase, const long long& expected, const long long& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    HandsShaking solution;

    void testCase0() {
		int n = 2;
		long long expected_ = 1LL;
        assertEquals(0, expected_, solution.countPerfect(n));
    }

    void testCase1() {
		int n = 4;
		long long expected_ = 2LL;
        assertEquals(1, expected_, solution.countPerfect(n));
    }

    void testCase2() {
		int n = 8;
		long long expected_ = 14LL;
        assertEquals(2, expected_, solution.countPerfect(n));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 3; i++) {
        HandsShakingTest test;
        test.runTest(i);
    }
}
