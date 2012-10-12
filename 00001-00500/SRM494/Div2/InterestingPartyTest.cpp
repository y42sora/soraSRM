#include "InterestingParty.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class InterestingPartyTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    InterestingParty solution;

    void testCase0() {
        string first_[] = {"fishing", "gardening", "swimming", "fishing"};
        vector<string> first(first_, first_ + (sizeof(first_) / sizeof(first_[0])));
        string second_[] = {"hunting", "fishing", "fishing", "biting"};
        vector<string> second(second_, second_ + (sizeof(second_) / sizeof(second_[0])));
		int expected_ = 4;
        assertEquals(0, expected_, solution.bestInvitation(first, second));
    }

    void testCase1() {
        string first_[] = {"variety", "diversity", "loquacity", "courtesy"};
        vector<string> first(first_, first_ + (sizeof(first_) / sizeof(first_[0])));
        string second_[] = {"talking", "speaking", "discussion", "meeting"};
        vector<string> second(second_, second_ + (sizeof(second_) / sizeof(second_[0])));
		int expected_ = 1;
        assertEquals(1, expected_, solution.bestInvitation(first, second));
    }

    void testCase2() {
        string first_[] = {"snakes", "programming", "cobra", "monty"};
        vector<string> first(first_, first_ + (sizeof(first_) / sizeof(first_[0])));
        string second_[] = {"python", "python", "anaconda", "python"};
        vector<string> second(second_, second_ + (sizeof(second_) / sizeof(second_[0])));
		int expected_ = 3;
        assertEquals(2, expected_, solution.bestInvitation(first, second));
    }

    void testCase3() {
        string first_[] = {"t", "o", "p", "c", "o", "d", "e", "r", "s", "i", "n", "g", "l", "e", "r", "o", "u", "n", "d", "m", "a", "t", "c", "h", "f", "o", "u", "r", "n", "i"};
        vector<string> first(first_, first_ + (sizeof(first_) / sizeof(first_[0])));
        string second_[] = {"n", "e", "f", "o", "u", "r", "j", "a", "n", "u", "a", "r", "y", "t", "w", "e", "n", "t", "y", "t", "w", "o", "s", "a", "t", "u", "r", "d", "a", "y"};
        vector<string> second(second_, second_ + (sizeof(second_) / sizeof(second_[0])));
		int expected_ = 6;
        assertEquals(3, expected_, solution.bestInvitation(first, second));
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
        InterestingPartyTest test;
        test.runTest(i);
    }
}
