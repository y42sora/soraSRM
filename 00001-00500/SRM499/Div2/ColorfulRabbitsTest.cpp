#include "ColorfulRabbits.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class ColorfulRabbitsTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    ColorfulRabbits solution;

    void testCase0() {
        int replies_[] = {1, 1, 2, 2};
        vector<int> replies(replies_, replies_ + (sizeof(replies_) / sizeof(replies_[0])));
		int expected_ = 5;
        assertEquals(0, expected_, solution.getMinimum(replies));
    }

    void testCase1() {
        int replies_[] = {0};
        vector<int> replies(replies_, replies_ + (sizeof(replies_) / sizeof(replies_[0])));
		int expected_ = 1;
        assertEquals(1, expected_, solution.getMinimum(replies));
    }

    void testCase2() {
        int replies_[] = {2, 2, 44, 2, 2, 2, 444, 2, 2};
        vector<int> replies(replies_, replies_ + (sizeof(replies_) / sizeof(replies_[0])));
		int expected_ = 499;
        assertEquals(2, expected_, solution.getMinimum(replies));
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
        ColorfulRabbitsTest test;
        test.runTest(i);
    }
}
