#include "LuckyCounter.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class LuckyCounterTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    LuckyCounter solution;

    void testCase0() {
        string moments_[] = {"12:21", "11:10"};
        vector<string> moments(moments_, moments_ + (sizeof(moments_) / sizeof(moments_[0])));
		int expected_ = 1;
        assertEquals(0, expected_, solution.countLuckyMoments(moments));
    }

    void testCase1() {
        string moments_[] = {"00:00", "00:59", "23:00"};
        vector<string> moments(moments_, moments_ + (sizeof(moments_) / sizeof(moments_[0])));
		int expected_ = 1;
        assertEquals(1, expected_, solution.countLuckyMoments(moments));
    }

    void testCase2() {
        string moments_[] = {"12:34"};
        vector<string> moments(moments_, moments_ + (sizeof(moments_) / sizeof(moments_[0])));
		int expected_ = 0;
        assertEquals(2, expected_, solution.countLuckyMoments(moments));
    }

    void testCase3() {
        string moments_[] = {"12:11", "22:22", "00:01", "03:30", "15:15", "16:00"};
        vector<string> moments(moments_, moments_ + (sizeof(moments_) / sizeof(moments_[0])));
		int expected_ = 3;
        assertEquals(3, expected_, solution.countLuckyMoments(moments));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 4; i++) {
        LuckyCounterTest test;
        test.runTest(i);
    }
}
