#include "TimeTravellingCellar.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class TimeTravellingCellarTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    TimeTravellingCellar solution;

    void testCase0() {
        int profit_[] = {1, 2, 3};
        vector<int> profit(profit_, profit_ + (sizeof(profit_) / sizeof(profit_[0])));
        int decay_[] = {3, 1, 2};
        vector<int> decay(decay_, decay_ + (sizeof(decay_) / sizeof(decay_[0])));
		int expected_ = 2;
        assertEquals(0, expected_, solution.determineProfit(profit, decay));
    }

    void testCase1() {
        int profit_[] = {3, 2};
        vector<int> profit(profit_, profit_ + (sizeof(profit_) / sizeof(profit_[0])));
        int decay_[] = {1, 2};
        vector<int> decay(decay_, decay_ + (sizeof(decay_) / sizeof(decay_[0])));
		int expected_ = 1;
        assertEquals(1, expected_, solution.determineProfit(profit, decay));
    }

    void testCase2() {
        int profit_[] = {3, 3, 3};
        vector<int> profit(profit_, profit_ + (sizeof(profit_) / sizeof(profit_[0])));
        int decay_[] = {1, 1, 1};
        vector<int> decay(decay_, decay_ + (sizeof(decay_) / sizeof(decay_[0])));
		int expected_ = 2;
        assertEquals(2, expected_, solution.determineProfit(profit, decay));
    }

    void testCase3() {
        int profit_[] = {1000, 500, 250, 125};
        vector<int> profit(profit_, profit_ + (sizeof(profit_) / sizeof(profit_[0])));
        int decay_[] = {64, 32, 16, 8};
        vector<int> decay(decay_, decay_ + (sizeof(decay_) / sizeof(decay_[0])));
		int expected_ = 992;
        assertEquals(3, expected_, solution.determineProfit(profit, decay));
    }

    void testCase4() {
        int profit_[] = {1030, 279, 9400, 9270, 1333, 1401, 6918, 5986};
        vector<int> profit(profit_, profit_ + (sizeof(profit_) / sizeof(profit_[0])));
        int decay_[] = {7104, 6890, 526, 1252, 3651, 6313, 8445, 7023};
        vector<int> decay(decay_, decay_ + (sizeof(decay_) / sizeof(decay_[0])));
		int expected_ = 8744;
        assertEquals(3, expected_, solution.determineProfit(profit, decay));
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
        TimeTravellingCellarTest test;
        test.runTest(i);
    }
}
