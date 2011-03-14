#include "MakeSquare.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class MakeSquareTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    MakeSquare solution;

    void testCase0() {
		string S = "abcdabgcd";
		int expected_ = 1;
        assertEquals(0, expected_, solution.minChanges(S));
    }

    void testCase1() {
		string S = "abcdeabce";
		int expected_ = 1;
        assertEquals(1, expected_, solution.minChanges(S));
    }

    void testCase2() {
		string S = "abcdeabxde";
		int expected_ = 1;
        assertEquals(2, expected_, solution.minChanges(S));
    }

    void testCase3() {
		string S = "aabcaabc";
		int expected_ = 0;
        assertEquals(3, expected_, solution.minChanges(S));
    }

    void testCase4() {
		string S = "aaaaabaaaaabaaaaa";
		int expected_ = 2;
        assertEquals(4, expected_, solution.minChanges(S));
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
        MakeSquareTest test;
        test.runTest(i);
    }
}
