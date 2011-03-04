#include "BunnyExamAfter.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class BunnyExamAfterTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    BunnyExamAfter solution;

    void testCase0() {
		string black = "ABC";
		string gray = "ABC";
		string white = "ABC";
		int expected_ = 0;
        assertEquals(0, expected_, solution.getMaximum(black, gray, white));
    }

    void testCase1() {
		string black = "A";
		string gray = "B";
		string white = "B";
		int expected_ = 2;
        assertEquals(1, expected_, solution.getMaximum(black, gray, white));
    }

    void testCase2() {
		string black = "ABC";
		string gray = "PQR";
		string white = "XYZ";
		int expected_ = 3;
        assertEquals(2, expected_, solution.getMaximum(black, gray, white));
    }

    void testCase3() {
		string black = "AAAAA";
		string gray = "AABBB";
		string white = "BBBAA";
		int expected_ = 6;
        assertEquals(3, expected_, solution.getMaximum(black, gray, white));
    }

    void testCase4() {
		string black = "TOPCODER";
		string gray = "TOPBUNNY";
		string white = "THEHONEY";
		int expected_ = 9;
        assertEquals(4, expected_, solution.getMaximum(black, gray, white));
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
        BunnyExamAfterTest test;
        test.runTest(i);
    }
}
