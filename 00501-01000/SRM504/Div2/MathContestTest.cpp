#include "MathContest.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class MathContestTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    MathContest solution;

    void testCase0() {
		string ballSequence = "BBWWB";
		int repetitions = 1;
		int expected_ = 2;
        assertEquals(0, expected_, solution.countBlack(ballSequence, repetitions));
    }

    void testCase1() {
		string ballSequence = "BBB";
		int repetitions = 10;
		int expected_ = 1;
        assertEquals(1, expected_, solution.countBlack(ballSequence, repetitions));
    }

    void testCase2() {
		string ballSequence = "BW";
		int repetitions = 2;
		int expected_ = 4;
        assertEquals(2, expected_, solution.countBlack(ballSequence, repetitions));
    }

    void testCase3() {
		string ballSequence = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
		int repetitions = 3500;
		int expected_ = 1;
        assertEquals(3, expected_, solution.countBlack(ballSequence, repetitions));
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
        MathContestTest test;
        test.runTest(i);
    }
}
