#include "ParallelProgramming.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class ParallelProgrammingTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    ParallelProgramming solution;

    void testCase0() {
        int time_[] = {150, 200, 250};
        vector<int> time(time_, time_ + (sizeof(time_) / sizeof(time_[0])));
        string prec_[] = {"NNN", "NNN", "NNN"};
        vector<string> prec(prec_, prec_ + (sizeof(prec_) / sizeof(prec_[0])));
		int expected_ = 250;
        assertEquals(0, expected_, solution.minTime(time, prec));
    }

    void testCase1() {
        int time_[] = {150, 200, 250};
        vector<int> time(time_, time_ + (sizeof(time_) / sizeof(time_[0])));
        string prec_[] = {"NNN", "YNN", "NNN"};
        vector<string> prec(prec_, prec_ + (sizeof(prec_) / sizeof(prec_[0])));
		int expected_ = 350;
        assertEquals(1, expected_, solution.minTime(time, prec));
    }

    void testCase2() {
        int time_[] = {150, 200, 250};
        vector<int> time(time_, time_ + (sizeof(time_) / sizeof(time_[0])));
        string prec_[] = {"NYN", "NNY", "NNN"};
        vector<string> prec(prec_, prec_ + (sizeof(prec_) / sizeof(prec_[0])));
		int expected_ = 600;
        assertEquals(2, expected_, solution.minTime(time, prec));
    }

    void testCase3() {
        int time_[] = {150, 200, 250};
        vector<int> time(time_, time_ + (sizeof(time_) / sizeof(time_[0])));
        string prec_[] = {"NYN", "NNY", "YNN"};
        vector<string> prec(prec_, prec_ + (sizeof(prec_) / sizeof(prec_[0])));
		int expected_ = -1;
        assertEquals(3, expected_, solution.minTime(time, prec));
    }

    void testCase4() {
            int time_[] = {345, 335, 325, 350, 321, 620};
            vector<int> time(time_, time_ + (sizeof(time_) / sizeof(time_[0])));
            string prec_[] = {"NNNNNN", "NNYYYY", "YNNNNN", "NNYNYN", "NNNNNN", "NNNNNN"};
            vector<string> prec(prec_, prec_ + (sizeof(prec_) / sizeof(prec_[0])));
    		int expected_ = 1355;
            assertEquals(4, expected_, solution.minTime(time, prec));
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
        ParallelProgrammingTest test;
        test.runTest(i);
    }
}
