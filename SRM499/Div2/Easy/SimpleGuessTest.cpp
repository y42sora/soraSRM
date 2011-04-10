#include "SimpleGuess.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class SimpleGuessTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    SimpleGuess solution;

    void testCase0() {
        int hints_[] = {1,4,5};
        vector<int> hints(hints_, hints_ + (sizeof(hints_) / sizeof(hints_[0])));
		int expected_ = 6;
        assertEquals(0, expected_, solution.getMaximum(hints));
    }

    void testCase1() {
        int hints_[] = {1, 4, 5, 8};
        vector<int> hints(hints_, hints_ + (sizeof(hints_) / sizeof(hints_[0])));
		int expected_ = 12;
        assertEquals(1, expected_, solution.getMaximum(hints));
    }

    void testCase2() {
        int hints_[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
        vector<int> hints(hints_, hints_ + (sizeof(hints_) / sizeof(hints_[0])));
		int expected_ = 20;
        assertEquals(2, expected_, solution.getMaximum(hints));
    }

    void testCase3() {
        int hints_[] = {2, 100};
        vector<int> hints(hints_, hints_ + (sizeof(hints_) / sizeof(hints_[0])));
		int expected_ = 2499;
        assertEquals(3, expected_, solution.getMaximum(hints));
    }

    void testCase4() {
        int hints_[] = {50, 58, 47, 57, 40};
        vector<int> hints(hints_, hints_ + (sizeof(hints_) / sizeof(hints_[0])));
		int expected_ = 441;
        assertEquals(4, expected_, solution.getMaximum(hints));
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
        SimpleGuessTest test;
        test.runTest(i);
    }
}
