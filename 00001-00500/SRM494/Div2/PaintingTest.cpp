#include "Painting.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class PaintingTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    Painting solution;

    void testCase0() {
        string picture_[] = {"BBBB", "BBBB", "BBBB", "BBBB"};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 4;
        assertEquals(0, expected_, solution.largestBrush(picture));
    }

    void testCase1() {
        string picture_[] = {"BBBB", "BWWB", "BWWB", "BBBB"};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 1;
        assertEquals(1, expected_, solution.largestBrush(picture));
    }

    void testCase2() {
        string picture_[] = {"WBBBBB", "BBBBBB", "BBBBBB", "BBBBBB"};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 3;
        assertEquals(2, expected_, solution.largestBrush(picture));
    }

    void testCase3() {
        string picture_[] = {"BBBB", "BBBB", "WBBB", "BBBB", "BBBB", "BBBB"};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 2;
        assertEquals(3, expected_, solution.largestBrush(picture));
    }

    void testCase4() {
        string picture_[] = {"WBBBBBWWWWWWWWW", "WBBBBBBWWWWWWWW", "WBBBBBBBBBBBWWW", "WBBBBBBBBBBBWWW", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBWWBBBBB", "BBBBBBBBWBBBBBB", "WBBBBBBBWBBBBBW", "BBBBBBBWWBBBBBW", "BBBBBBBWWBBBBBW", "BBBBBBWWWBBBBBW", "BBBBBWWWWWWWWWW", "BBBBBWWWWWWWWWW"};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 5;
        assertEquals(4, expected_, solution.largestBrush(picture));
    }

    void testCase5() {
    	string picture_[] = {"BBWBBBBBBBBBBBBBBBBBBBBBBBBBBBBBWBBBBB", "BBBBBBBBBBBBWWBBBWBBBBBBBBBWBBBBBBWBBB"};
        vector<string> picture(picture_, picture_ + (sizeof(picture_) / sizeof(picture_[0])));
		int expected_ = 1;
        assertEquals(5, expected_, solution.largestBrush(picture));
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
        PaintingTest test;
        test.runTest(i);
    }
}
