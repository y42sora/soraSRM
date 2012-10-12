#include "StockHistory.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class StockHistoryTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    StockHistory solution;

    void testCase0() {
		int initialInvestment = 1000;
		int monthlyContribution = 0;
        string stockPrices_[] = {"10 20 30", "15 24 32"};
        vector<string> stockPrices(stockPrices_, stockPrices_ + (sizeof(stockPrices_) / sizeof(stockPrices_[0])));
		int expected_ = 500;
        assertEquals(0, expected_, solution.maximumEarnings(initialInvestment, monthlyContribution, stockPrices));
    }

    void testCase1() {
		int initialInvestment = 1000;
		int monthlyContribution = 0;
        string stockPrices_[] = {"10", "9"};
        vector<string> stockPrices(stockPrices_, stockPrices_ + (sizeof(stockPrices_) / sizeof(stockPrices_[0])));
		int expected_ = 0;
        assertEquals(1, expected_, solution.maximumEarnings(initialInvestment, monthlyContribution, stockPrices));
    }

    void testCase2() {
		int initialInvestment = 100;
		int monthlyContribution = 20;
        string stockPrices_[] = {"40 50 60", "37 48 55", "100 48 50", "105 48 47", "110 50 52", "110 50 52", "110 51 54", "109 49 53"};
        vector<string> stockPrices(stockPrices_, stockPrices_ + (sizeof(stockPrices_) / sizeof(stockPrices_[0])));
		int expected_ = 239;
        assertEquals(2, expected_, solution.maximumEarnings(initialInvestment, monthlyContribution, stockPrices));
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
        StockHistoryTest test;
        test.runTest(i);
    }
}
