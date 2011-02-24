#include "CirclesCountry.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class CirclesCountryTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    CirclesCountry solution;

    void testCase0() {
        int X_[] = {0};
        vector<int> X(X_, X_ + (sizeof(X_) / sizeof(X_[0])));
        int Y_[] = {0};
        vector<int> Y(Y_, Y_ + (sizeof(Y_) / sizeof(Y_[0])));
        int R_[] = {2};
        vector<int> R(R_, R_ + (sizeof(R_) / sizeof(R_[0])));
		int x1 = -5;
		int y1 = 1;
		int x2 = 5;
		int y2 = 1;
		int expected_ = 0;
        assertEquals(0, expected_, solution.leastBorders(X, Y, R, x1, y1, x2, y2));
    }

    void testCase1() {
        int X_[] = {0, -6, 6};
        vector<int> X(X_, X_ + (sizeof(X_) / sizeof(X_[0])));
        int Y_[] = {0, 1, 2};
        vector<int> Y(Y_, Y_ + (sizeof(Y_) / sizeof(Y_[0])));
        int R_[] = {2, 2, 2};
        vector<int> R(R_, R_ + (sizeof(R_) / sizeof(R_[0])));
		int x1 = -5;
		int y1 = 1;
		int x2 = 5;
		int y2 = 1;
		int expected_ = 2;
        assertEquals(1, expected_, solution.leastBorders(X, Y, R, x1, y1, x2, y2));
    }

    void testCase2() {
        int X_[] = {1, -3, 2, 5, -4, 12, 12};
        vector<int> X(X_, X_ + (sizeof(X_) / sizeof(X_[0])));
        int Y_[] = {1, -1, 2, 5, 5, 1, 1};
        vector<int> Y(Y_, Y_ + (sizeof(Y_) / sizeof(Y_[0])));
        int R_[] = {8, 1, 2, 1, 1, 1, 2};
        vector<int> R(R_, R_ + (sizeof(R_) / sizeof(R_[0])));
		int x1 = -5;
		int y1 = 1;
		int x2 = 12;
		int y2 = 1;
		int expected_ = 3;
        assertEquals(2, expected_, solution.leastBorders(X, Y, R, x1, y1, x2, y2));
    }

    void testCase3() {
        int X_[] = {-3, 2, 2, 0, -4, 12, 12, 12};
        vector<int> X(X_, X_ + (sizeof(X_) / sizeof(X_[0])));
        int Y_[] = {-1, 2, 3, 1, 5, 1, 1, 1};
        vector<int> Y(Y_, Y_ + (sizeof(Y_) / sizeof(Y_[0])));
        int R_[] = {1, 3, 1, 7, 1, 1, 2, 3};
        vector<int> R(R_, R_ + (sizeof(R_) / sizeof(R_[0])));
		int x1 = 2;
		int y1 = 3;
		int x2 = 13;
		int y2 = 2;
		int expected_ = 5;
        assertEquals(3, expected_, solution.leastBorders(X, Y, R, x1, y1, x2, y2));
    }

    void testCase4() {
        int X_[] = {-107, -38, 140, 148, -198, 172, -179, 148, 176, 153, -56, -187};
        vector<int> X(X_, X_ + (sizeof(X_) / sizeof(X_[0])));
        int Y_[] = {175, -115, 23, -2, -49, -151, -52, 42, 0, 68, 109, -174};
        vector<int> Y(Y_, Y_ + (sizeof(Y_) / sizeof(Y_[0])));
        int R_[] = {135, 42, 70, 39, 89, 39, 43, 150, 10, 120, 16, 8};
        vector<int> R(R_, R_ + (sizeof(R_) / sizeof(R_[0])));
		int x1 = 102;
		int y1 = 16;
		int x2 = 19;
		int y2 = -108;
		int expected_ = 3;
        assertEquals(4, expected_, solution.leastBorders(X, Y, R, x1, y1, x2, y2));
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
        CirclesCountryTest test;
        test.runTest(i);
    }
}
