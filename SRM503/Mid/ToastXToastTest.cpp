#include "ToastXToast.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class ToastXToastTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    ToastXToast solution;

    void testCase0() {
        int undertoasted_[] = {1,9,35};
        vector<int> undertoasted(undertoasted_, undertoasted_ + (sizeof(undertoasted_) / sizeof(undertoasted_[0])));
        int overtoasted_[] = {8,23,45};
        vector<int> overtoasted(overtoasted_, overtoasted_ + (sizeof(overtoasted_) / sizeof(overtoasted_[0])));
		int expected_ = 2;
        assertEquals(0, expected_, solution.bake(undertoasted, overtoasted));
    }

    void testCase1() {
        int undertoasted_[] = {5};
        vector<int> undertoasted(undertoasted_, undertoasted_ + (sizeof(undertoasted_) / sizeof(undertoasted_[0])));
        int overtoasted_[] = {4};
        vector<int> overtoasted(overtoasted_, overtoasted_ + (sizeof(overtoasted_) / sizeof(overtoasted_[0])));
		int expected_ = -1;
        assertEquals(1, expected_, solution.bake(undertoasted, overtoasted));
    }

    void testCase2() {
        int undertoasted_[] = {1, 2, 3};
        vector<int> undertoasted(undertoasted_, undertoasted_ + (sizeof(undertoasted_) / sizeof(undertoasted_[0])));
        int overtoasted_[] = {5, 6, 7};
        vector<int> overtoasted(overtoasted_, overtoasted_ + (sizeof(overtoasted_) / sizeof(overtoasted_[0])));
		int expected_ = 1;
        assertEquals(2, expected_, solution.bake(undertoasted, overtoasted));
    }

    void testCase3() {
        int undertoasted_[] = {1, 3, 5};
        vector<int> undertoasted(undertoasted_, undertoasted_ + (sizeof(undertoasted_) / sizeof(undertoasted_[0])));
        int overtoasted_[] = {2, 4, 6};
        vector<int> overtoasted(overtoasted_, overtoasted_ + (sizeof(overtoasted_) / sizeof(overtoasted_[0])));
		int expected_ = 2;
        assertEquals(3, expected_, solution.bake(undertoasted, overtoasted));
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
        ToastXToastTest test;
        test.runTest(i);
    }
}
