#include "FoxSequence.h"
#include <iostream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class FoxSequenceTest {

    static void assertEquals(int testCase, const string& expected, const string& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << '"' << expected << '"' << "> but was: <" << '"' << actual << '"' << '>' << endl;
        }
    }

    FoxSequence solution;

    void testCase0() {
        int seq_[] = {1, 3, 5, 7, 5, 3, 1, 1, 1, 3, 5, 7, 5, 3, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		string expected_ = "YES";
        assertEquals(0, expected_, solution.isValid(seq));
    }

    void testCase1() {
        int seq_[] = {1, 2, 3, 4, 5, 4, 3, 2, 2, 2, 3, 4, 5, 6, 4};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		string expected_ = "YES";
        assertEquals(1, expected_, solution.isValid(seq));
    }

    void testCase2() {
        int seq_[] = {3, 6, 9, 1, 9, 5, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		string expected_ = "YES";
        assertEquals(2, expected_, solution.isValid(seq));
    }

    void testCase3() {
        int seq_[] = {1, 2, 3, 2, 1, 2, 3, 2, 1, 2, 3, 2, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		string expected_ = "NO";
        assertEquals(3, expected_, solution.isValid(seq));
    }

    void testCase4() {
        int seq_[] = {1, 3, 4, 3, 1, 1, 1, 1, 3, 4, 3, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		string expected_ = "NO";
        assertEquals(4, expected_, solution.isValid(seq));
    }

    void testCase5() {
        int seq_[] = {1, 3, 5, 4, 1, 3, 5, 3, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
		string expected_ = "NO";
        assertEquals(5, expected_, solution.isValid(seq));
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
        FoxSequenceTest test;
        test.runTest(i);
    }
}
