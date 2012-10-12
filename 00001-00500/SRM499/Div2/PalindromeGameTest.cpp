#include "PalindromeGame.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class PalindromeGameTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    PalindromeGame solution;

    void testCase0() {
        string front_[] = {"topcoder", "aaraa", "redocpot"};
        vector<string> front(front_, front_ + (sizeof(front_) / sizeof(front_[0])));
        int back_[] = {7, 5, 3};
        vector<int> back(back_, back_ + (sizeof(back_) / sizeof(back_[0])));
		int expected_ = 15;
        assertEquals(0, expected_, solution.getMaximum(front, back));
    }

    void testCase1() {
        string front_[] = {"xyx", "xyx", "xyx", "zzz", "zzz", "zzz"};
        vector<string> front(front_, front_ + (sizeof(front_) / sizeof(front_[0])));
        int back_[] = {5, 7, 2, 1, 6, 4};
        vector<int> back(back_, back_ + (sizeof(back_) / sizeof(back_[0])));
		int expected_ = 24;
        assertEquals(1, expected_, solution.getMaximum(front, back));
    }

    void testCase2() {
        string front_[] = {"abc", "abc", "def", "cba", "fed"};
        vector<string> front(front_, front_ + (sizeof(front_) / sizeof(front_[0])));
        int back_[] = {24, 7, 63, 222, 190};
        vector<int> back(back_, back_ + (sizeof(back_) / sizeof(back_[0])));
		int expected_ = 499;
        assertEquals(2, expected_, solution.getMaximum(front, back));
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
    for (int i = 1; i < 2; i++) {
        PalindromeGameTest test;
        test.runTest(i);
    }
}
