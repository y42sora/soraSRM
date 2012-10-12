#include "ComparerInator.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class ComparerInatorTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    ComparerInator solution;

    void testCase0() {
        int A_[] = {1};
        vector<int> A(A_, A_ + (sizeof(A_) / sizeof(A_[0])));
        int B_[] = {2};
        vector<int> B(B_, B_ + (sizeof(B_) / sizeof(B_[0])));
        int wanted_[] = {2};
        vector<int> wanted(wanted_, wanted_ + (sizeof(wanted_) / sizeof(wanted_[0])));
		int expected_ = 1;
        assertEquals(0, expected_, solution.makeProgram(A, B, wanted));
    }

    void testCase1() {
        int A_[] = {1, 3};
        vector<int> A(A_, A_ + (sizeof(A_) / sizeof(A_[0])));
        int B_[] = {2, 1};
        vector<int> B(B_, B_ + (sizeof(B_) / sizeof(B_[0])));
        int wanted_[] = {2, 3};
        vector<int> wanted(wanted_, wanted_ + (sizeof(wanted_) / sizeof(wanted_[0])));
		int expected_ = 7;
        assertEquals(1, expected_, solution.makeProgram(A, B, wanted));
    }

    void testCase2() {
        int A_[] = {1, 3, 5};
        vector<int> A(A_, A_ + (sizeof(A_) / sizeof(A_[0])));
        int B_[] = {2, 1, 7};
        vector<int> B(B_, B_ + (sizeof(B_) / sizeof(B_[0])));
        int wanted_[] = {2, 3, 5};
        vector<int> wanted(wanted_, wanted_ + (sizeof(wanted_) / sizeof(wanted_[0])));
		int expected_ = -1;
        assertEquals(2, expected_, solution.makeProgram(A, B, wanted));
    }

    void testCase3() {
        int A_[] = {1, 3, 5};
        vector<int> A(A_, A_ + (sizeof(A_) / sizeof(A_[0])));
        int B_[] = {2, 1, 7};
        vector<int> B(B_, B_ + (sizeof(B_) / sizeof(B_[0])));
        int wanted_[] = {1, 3, 5};
        vector<int> wanted(wanted_, wanted_ + (sizeof(wanted_) / sizeof(wanted_[0])));
		int expected_ = 1;
        assertEquals(3, expected_, solution.makeProgram(A, B, wanted));
    }

    void testCase4() {
        int A_[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        vector<int> A(A_, A_ + (sizeof(A_) / sizeof(A_[0])));
        int B_[] = {5, 4, 7, 8, 3, 1, 1, 2, 3, 4, 6};
        vector<int> B(B_, B_ + (sizeof(B_) / sizeof(B_[0])));
        int wanted_[] = {1, 2, 3, 4, 3, 1, 1, 2, 3, 4, 6};
        vector<int> wanted(wanted_, wanted_ + (sizeof(wanted_) / sizeof(wanted_[0])));
		int expected_ = 7;
        assertEquals(4, expected_, solution.makeProgram(A, B, wanted));
    }

    void testCase5() {
        int A_[] = {1, 5, 6, 7, 8};
        vector<int> A(A_, A_ + (sizeof(A_) / sizeof(A_[0])));
        int B_[] = {1, 5, 6, 7, 8};
        vector<int> B(B_, B_ + (sizeof(B_) / sizeof(B_[0])));
        int wanted_[] = {1, 5, 6, 7, 8};
        vector<int> wanted(wanted_, wanted_ + (sizeof(wanted_) / sizeof(wanted_[0])));
		int expected_ = 1;
        assertEquals(5, expected_, solution.makeProgram(A, B, wanted));
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
        ComparerInatorTest test;
        test.runTest(i);
    }
}
