#include "ColoredStrokes.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class ColoredStrokesTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    ColoredStrokes solution;

    void testCase0() {
        string picture_[] = {"...", "..."};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 0;
        assertEquals(0, expected_, solution.getLeast(picture));
    }

    void testCase1() {
        string picture_[] = {"..B.", "..B."};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 1;
        assertEquals(1, expected_, solution.getLeast(picture));
    }

    void testCase2() {
        string picture_[] = {".BB."};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 2;
        assertEquals(2, expected_, solution.getLeast(picture));
    }

    void testCase3() {
        string picture_[] = {"...B..", ".BRGRR", ".B.B.."};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 3;
        assertEquals(3, expected_, solution.getLeast(picture));
    }

    void testCase4() {
        string picture_[] = {"...B..", ".BRBRR", ".B.B.."};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 4;
        assertEquals(4, expected_, solution.getLeast(picture));
    }

    void testCase5() {
        string picture_[] = {"GR", "BG"};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 4;
        assertEquals(5, expected_, solution.getLeast(picture));
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
        ColoredStrokesTest test;
        test.runTest(i);
    }
}
