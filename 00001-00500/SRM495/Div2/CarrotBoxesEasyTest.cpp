#include "CarrotBoxesEasy.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class CarrotBoxesEasyTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    CarrotBoxesEasy solution;

    void testCase0() {
        int carrots_[] = {5, 8};
        vector<int> carrots(carrots_, carrots_ + (sizeof(carrots_) / sizeof(carrots_[0])));
		int K = 3;
		int expected_ = 1;
        assertEquals(0, expected_, solution.theIndex(carrots, K));
    }

    void testCase1() {
        int carrots_[] = {5, 8};
        vector<int> carrots(carrots_, carrots_ + (sizeof(carrots_) / sizeof(carrots_[0])));
		int K = 4;
		int expected_ = 0;
        assertEquals(1, expected_, solution.theIndex(carrots, K));
    }

    void testCase2() {
        int carrots_[] = {4, 9, 5};
        vector<int> carrots(carrots_, carrots_ + (sizeof(carrots_) / sizeof(carrots_[0])));
		int K = 18;
		int expected_ = 2;
        assertEquals(2, expected_, solution.theIndex(carrots, K));
    }

    void testCase3() {
        int carrots_[] = {13, 75, 24, 55};
        vector<int> carrots(carrots_, carrots_ + (sizeof(carrots_) / sizeof(carrots_[0])));
		int K = 140;
		int expected_ = 0;
        assertEquals(3, expected_, solution.theIndex(carrots, K));
    }

    void testCase4() {
        int carrots_[] = {14, 36, 52, 86, 27, 97, 3, 67};
        vector<int> carrots(carrots_, carrots_ + (sizeof(carrots_) / sizeof(carrots_[0])));
		int K = 300;
		int expected_ = 4;
        assertEquals(4, expected_, solution.theIndex(carrots, K));
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
        CarrotBoxesEasyTest test;
        test.runTest(i);
    }
}
