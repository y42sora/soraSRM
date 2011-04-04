#include "FoxProgression.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class FoxProgressionTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    FoxProgression solution;

    void testCase0() {
        int seq_[] = {1, 2, 4, 8};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		int expected_ = 1;
        assertEquals(0, expected_, solution.theCount(seq));
    }

    void testCase1() {
        int seq_[] = {5, 3, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		int expected_ = 1;
        assertEquals(1, expected_, solution.theCount(seq));
    }

    void testCase2() {
        int seq_[] = {1, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		int expected_ = 1;
        assertEquals(2, expected_, solution.theCount(seq));
    }

    void testCase3() {
        int seq_[] = {8, 4};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		int expected_ = 1;
        assertEquals(3, expected_, solution.theCount(seq));
    }

    void testCase4() {
        int seq_[] = {1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		int expected_ = -1;
        assertEquals(4, expected_, solution.theCount(seq));
    }

    void testCase5() {
        int seq_[] = {4, 8};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		int expected_ = 2;
        assertEquals(5, expected_, solution.theCount(seq));
    }

    void testCase6() {
        int seq_[] = {1, 1, 2, 2, 3, 3};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		int expected_ = 0;
        assertEquals(6, expected_, solution.theCount(seq));
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
        FoxProgressionTest test;
        test.runTest(i);
    }
}
