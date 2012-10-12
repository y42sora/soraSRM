#include "TxMsg.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class TxMsgTest {

    static void assertEquals(int testCase, const string& expected, const string& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << '"' << expected << '"' << "> but was: <" << '"' << actual << '"' << '>' << endl;
        }
    }

    TxMsg solution;

    void testCase0() {
		string original = "text message";
		string expected_ = "tx msg";
        assertEquals(0, expected_, solution.getMessage(original));
    }

    void testCase1() {
		string original = "ps i love u";
		string expected_ = "p i lv u";
        assertEquals(1, expected_, solution.getMessage(original));
    }

    void testCase2() {
		string original = "please please me";
		string expected_ = "ps ps m";
        assertEquals(2, expected_, solution.getMessage(original));
    }

    void testCase3() {
		string original = "back to the ussr";
		string expected_ = "bc t t s";
        assertEquals(3, expected_, solution.getMessage(original));
    }

    void testCase4() {
		string original = "aeiou bcdfghjklmnpqrstvwxyz";
		string expected_ = "aeiou b";
        assertEquals(4, expected_, solution.getMessage(original));
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
        TxMsgTest test;
        test.runTest(i);
    }
}
