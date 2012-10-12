#include "AutoLoan.h"
#include <algorithm>
#include <cmath>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class AutoLoanTest {

    static void assertEquals(int testCase, double expected, double actual) {
        double delta = max(1e-9, 1e-9 * abs(expected));
        if (abs(expected - actual) <= delta) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout.precision(24);
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    AutoLoan solution;

    void testCase0() {
		double price = 6800.0;
		double monthlyPayment = 100.0;
		int loanTerm = 68;
		double expected_ = 1.3322616182218813E-13;
        assertEquals(0, expected_, solution.interestRate(price, monthlyPayment, loanTerm));
    }

    void testCase1() {
		double price = 2000.0;
		double monthlyPayment = 510.0;
		int loanTerm = 4;
		double expected_ = 9.56205462458368;
        assertEquals(1, expected_, solution.interestRate(price, monthlyPayment, loanTerm));
    }

    void testCase2() {
		double price = 15000.0;
		double monthlyPayment = 364.0;
		int loanTerm = 48;
		double expected_ = 7.687856394581649;
        assertEquals(2, expected_, solution.interestRate(price, monthlyPayment, loanTerm));
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
        AutoLoanTest test;
        test.runTest(i);
    }
}
