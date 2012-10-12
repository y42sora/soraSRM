#include "AnagramFree.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class AnagramFreeTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    AnagramFree solution;

    void testCase0() {
        string S_[] = {"abcd", "abdc", "dabc", "bacd"};
        vector<string> S(S_, S_ + (sizeof(S_) / sizeof(S_[0])));
		int expected_ = 1;
        assertEquals(0, expected_, solution.getMaximumSubset(S));
    }

    void testCase1() {
        string S_[] = {"abcd", "abac", "aabc", "bacd"};
        vector<string> S(S_, S_ + (sizeof(S_) / sizeof(S_[0])));
		int expected_ = 2;
        assertEquals(1, expected_, solution.getMaximumSubset(S));
    }

    void testCase2() {
        string S_[] = {"aa", "aaaaa", "aaa", "a", "bbaaaa", "aaababaa"};
        vector<string> S(S_, S_ + (sizeof(S_) / sizeof(S_[0])));
		int expected_ = 6;
        assertEquals(2, expected_, solution.getMaximumSubset(S));
    }

    void testCase3() {
        string S_[] = {"creation", "sentence", "reaction", "sneak", "star", "rats", "snake"};
        vector<string> S(S_, S_ + (sizeof(S_) / sizeof(S_[0])));
		int expected_ = 4;
        assertEquals(3, expected_, solution.getMaximumSubset(S));
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
        AnagramFreeTest test;
        test.runTest(i);
    }
}
