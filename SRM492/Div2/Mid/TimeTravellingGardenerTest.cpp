#include "TimeTravellingGardener.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class TimeTravellingGardenerTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    TimeTravellingGardener solution;

    void testCase0() {
        int distance_[] = {2, 2};
        vector<int> distance(distance_, distance_ + (sizeof(distance_) / sizeof(distance_[0])));
        int height_[] = {1, 3, 10};
        vector<int> height(height_, height_ + (sizeof(height_) / sizeof(height_[0])));
		int expected_ = 1;
        assertEquals(0, expected_, solution.determineUsage(distance, height));
    }

    void testCase1() {
        int distance_[] = {3, 3};
        vector<int> distance(distance_, distance_ + (sizeof(distance_) / sizeof(distance_[0])));
        int height_[] = {3, 1, 3};
        vector<int> height(height_, height_ + (sizeof(height_) / sizeof(height_[0])));
		int expected_ = 2;
        assertEquals(1, expected_, solution.determineUsage(distance, height));
    }

    void testCase2() {
        int distance_[] = {1, 3};
        vector<int> distance(distance_, distance_ + (sizeof(distance_) / sizeof(distance_[0])));
        int height_[] = {4, 4, 4};
        vector<int> height(height_, height_ + (sizeof(height_) / sizeof(height_[0])));
		int expected_ = 0;
        assertEquals(2, expected_, solution.determineUsage(distance, height));
    }

    void testCase3() {
        int distance_[] = {4, 2};
        vector<int> distance(distance_, distance_ + (sizeof(distance_) / sizeof(distance_[0])));
        int height_[] = {9, 8, 5};
        vector<int> height(height_, height_ + (sizeof(height_) / sizeof(height_[0])));
		int expected_ = 1;
        assertEquals(3, expected_, solution.determineUsage(distance, height));
    }

    void testCase4() {
        int distance_[] = {476, 465, 260, 484};
        vector<int> distance(distance_, distance_ + (sizeof(distance_) / sizeof(distance_[0])));
        int height_[] = {39, 13, 8, 72, 80};
        vector<int> height(height_, height_ + (sizeof(height_) / sizeof(height_[0])));
		int expected_ = 3;
        assertEquals(4, expected_, solution.determineUsage(distance, height));
    }

    void testCase5() {
        int distance_[] = {173, 36, 668, 79, 26, 544};
        vector<int> distance(distance_, distance_ + (sizeof(distance_) / sizeof(distance_[0])));
        int height_[] = {488, 743, 203, 446, 444, 91, 453};
        vector<int> height(height_, height_ + (sizeof(height_) / sizeof(height_[0])));
		int expected_ = 5;
        assertEquals(5, expected_, solution.determineUsage(distance, height));
    }

    void testCase6() {
        int distance_[] = {2, 4, 2, 2, 4, 2, 4, 2, 2, 4};
        vector<int> distance(distance_, distance_ + (sizeof(distance_) / sizeof(distance_[0])));
        int height_[] = {2, 2, 10, 10, 10, 16, 16, 22, 22, 28, 28};
        vector<int> height(height_, height_ + (sizeof(height_) / sizeof(height_[0])));
		int expected_ = 6;
        assertEquals(6, expected_, solution.determineUsage(distance, height));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            case (4): testCase4(); break;
            case (5): testCase5(); break;
            case (6): testCase6(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 7; i++) {
        TimeTravellingGardenerTest test;
        test.runTest(i);
    }
}
