#include "CubeColoring.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class CubeColoringTest {

    static void assertEquals(int testCase, const long long& expected, const long long& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    CubeColoring solution;

    void testCase0() {
        string colors_[] = {"Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y"};
        vector<string> colors(colors_, colors_ + (sizeof(colors_) / sizeof(colors_[0])));
		long long expected_ = 0LL;
        assertEquals(0, expected_, solution.theCount(colors));
    }

    void testCase1() {
        string colors_[] = {"YNNNNNNN", "NYNNNNNN", "NNYNNNNN", "NNNYNNNN", "NNNNYNNN", "NNNNNYNN", "NNNNNNYN", "NNNNNNNY"};
        vector<string> colors(colors_, colors_ + (sizeof(colors_) / sizeof(colors_[0])));
		long long expected_ = 1LL;
        assertEquals(1, expected_, solution.theCount(colors));
    }

    void testCase2() {
        string colors_[] = {"YNNYN", "YYYYY", "NYYNY", "YNYYN", "YNNYY", "YNNYY", "NNNYY", "NYYYY"};
        vector<string> colors(colors_, colors_ + (sizeof(colors_) / sizeof(colors_[0])));
		long long expected_ = 250LL;
        assertEquals(2, expected_, solution.theCount(colors));
    }

    void testCase3() {
        string colors_[] = {"YNNYN", "YYYYY", "NNNNN", "YNYYN", "YNNYY", "YNNYY", "NNNYY", "NYYYY"};
        vector<string> colors(colors_, colors_ + (sizeof(colors_) / sizeof(colors_[0])));
		long long expected_ = 0LL;
        assertEquals(3, expected_, solution.theCount(colors));
    }

    void testCase4() {
        string colors_[] = {"YNNYNYYYYYNN", "NNNYNYYNYNNY", "YYNNYYNNNYYN", "YYYYYNNYYYNN", "NNNYYYNNYNYN", "YYYNYYYYNYNN", "NNNNNNYYNYYN", "NNYNYYNNYNYY"};
        vector<string> colors(colors_, colors_ + (sizeof(colors_) / sizeof(colors_[0])));
		long long expected_ = 611480LL;
        assertEquals(4, expected_, solution.theCount(colors));
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
        CubeColoringTest test;
        test.runTest(i);
    }
}
