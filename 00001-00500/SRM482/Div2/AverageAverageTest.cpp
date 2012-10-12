#include "AverageAverage.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class AverageAverageTest {

    static void assertEquals(int testCase, double expected, double actual) {
        double delta = max(1e-9, 1e-9 * abs(expected));
        if (abs(expected - actual) <= delta) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout.precision(24);
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    AverageAverage solution;

    void testCase0() {
        int numList_[] = {1, 2, 3};
        vector<int> numList(numList_, numList_ + (sizeof(numList_) / sizeof(numList_[0])));
		double expected_ = 2.0;
        assertEquals(0, expected_, solution.average(numList));
    }

    void testCase1() {
        int numList_[] = {42};
        vector<int> numList(numList_, numList_ + (sizeof(numList_) / sizeof(numList_[0])));
		double expected_ = 42.0;
        assertEquals(1, expected_, solution.average(numList));
    }

    void testCase2() {
        int numList_[] = {3, 1, 4, 15, 9};
        vector<int> numList(numList_, numList_ + (sizeof(numList_) / sizeof(numList_[0])));
		double expected_ = 6.4;
        assertEquals(2, expected_, solution.average(numList));
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
        AverageAverageTest test;
        test.runTest(i);
    }
}
