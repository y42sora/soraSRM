#include "HamiltonPath.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class HamiltonPathTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    HamiltonPath solution;

    void testCase0() {
        string roads_[] = {"NYN", "YNN", "NNN"};
        vector<string> roads(roads_, roads_ + (sizeof(roads_) / sizeof(roads_[0])));
		int expected_ = 4;
        assertEquals(0, expected_, solution.countPaths(roads));
    }

    void testCase1() {
        string roads_[] = {"NYYY", "YNNN", "YNNN", "YNNN"};
        vector<string> roads(roads_, roads_ + (sizeof(roads_) / sizeof(roads_[0])));
		int expected_ = 0;
        assertEquals(1, expected_, solution.countPaths(roads));
    }

    void testCase2() {
        string roads_[] = {"NYY", "YNY", "YYN"};
        vector<string> roads(roads_, roads_ + (sizeof(roads_) / sizeof(roads_[0])));
		int expected_ = 0;
        assertEquals(2, expected_, solution.countPaths(roads));
    }

    void testCase3() {
        string roads_[] = {"NNNNNY", "NNNNYN", "NNNNYN", "NNNNNN", "NYYNNN", "YNNNNN"};
        vector<string> roads(roads_, roads_ + (sizeof(roads_) / sizeof(roads_[0])));
		int expected_ = 24;
        assertEquals(3, expected_, solution.countPaths(roads));
    }

    void testCase4() {
            string roads_[] = {"NNNYNNNYNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "YNNNNNNNNNNYN", "NNNNNYNYNNNNN", "NNNNYNNNNNNNY", "NNNNNNNNNNNNN", "YNNNYNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNYY", "NNNYNNNNNNYNN", "NNNNNYNNNNYNN"};
            vector<string> roads(roads_, roads_ + (sizeof(roads_) / sizeof(roads_[0])));
    		int expected_ = 0;
            assertEquals(4, expected_, solution.countPaths(roads));
        }


    void testCase5() {
            string roads_[] = {"NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN"};
            vector<string> roads(roads_, roads_ + (sizeof(roads_) / sizeof(roads_[0])));
    		int expected_ = 771752869;
            assertEquals(5, expected_, solution.countPaths(roads));
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
        HamiltonPathTest test;
        test.runTest(i);
    }
}
