#include "OneRegister.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class OneRegisterTest {

    static void assertEquals(int testCase, const string& expected, const string& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << '"' << expected << '"' << "> but was: <" << '"' << actual << '"' << '>' << endl;
        }
    }

    OneRegister solution;

    void testCase0() {
		int s = 7;
		int t = 392;
		string expected_ = "+*+";
        assertEquals(0, expected_, solution.getProgram(s, t));
    }

    void testCase1() {
		int s = 7;
		int t = 256;
		string expected_ = "/+***";
        assertEquals(1, expected_, solution.getProgram(s, t));
    }

    void testCase2() {
		int s = 4;
		int t = 256;
		string expected_ = "**";
        assertEquals(2, expected_, solution.getProgram(s, t));
    }

    void testCase3() {
		int s = 7;
		int t = 7;
		string expected_ = "";
        assertEquals(3, expected_, solution.getProgram(s, t));
    }

    void testCase4() {
		int s = 7;
		int t = 9;
		string expected_ = ":-(";
        assertEquals(4, expected_, solution.getProgram(s, t));
    }

    void testCase5() {
		int s = 10;
		int t = 1;
		string expected_ = "/";
        assertEquals(5, expected_, solution.getProgram(s, t));
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
        OneRegisterTest test;
        test.runTest(i);
    }
}
