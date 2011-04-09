#include "TheProgrammingContestDivTwo.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class TheProgrammingContestDivTwoTest {

    static void writeTo(std::ostream& out, const vector<int>& v) {
        out << '{';
        for (unsigned int i = 0; i < v.size(); i++) {
            out << v[i];
            if (i + 1 != v.size()) out << ", ";
        }
        out << '}';
    }

    static void assertEquals(int testCase, const vector<int>& expected, const vector<int>& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <";
            writeTo(cout, expected);
            cout << "> but was: <";
            writeTo(cout, actual);
            cout << '>' << endl;
        }
    }

    TheProgrammingContestDivTwo solution;

    void testCase0() {
		int T = 74;
        int requiredTime_[] = {47};
        vector<int> requiredTime(requiredTime_, requiredTime_ + (sizeof(requiredTime_) / sizeof(requiredTime_[0])));
        int expected__[] = {1, 47};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(0, expected_, solution.find(T, requiredTime));
    }

    void testCase1() {
		int T = 74;
        int requiredTime_[] = {4747};
        vector<int> requiredTime(requiredTime_, requiredTime_ + (sizeof(requiredTime_) / sizeof(requiredTime_[0])));
        int expected__[] = {0, 0};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(1, expected_, solution.find(T, requiredTime));
    }

    void testCase2() {
		int T = 47;
        int requiredTime_[] = {8, 5};
        vector<int> requiredTime(requiredTime_, requiredTime_ + (sizeof(requiredTime_) / sizeof(requiredTime_[0])));
        int expected__[] = {2, 18};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(2, expected_, solution.find(T, requiredTime));
    }

    void testCase3() {
		int T = 47;
        int requiredTime_[] = {12, 3, 21, 6, 4, 13};
        vector<int> requiredTime(requiredTime_, requiredTime_ + (sizeof(requiredTime_) / sizeof(requiredTime_[0])));
        int expected__[] = {5, 86};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(3, expected_, solution.find(T, requiredTime));
    }

    void testCase4() {
		int T = 58;
        int requiredTime_[] = {4, 5, 82, 3, 4, 65, 7, 6, 8, 7, 6, 4, 8, 7, 6, 37, 8};
        vector<int> requiredTime(requiredTime_, requiredTime_ + (sizeof(requiredTime_) / sizeof(requiredTime_[0])));
        int expected__[] = {10, 249};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(4, expected_, solution.find(T, requiredTime));
    }

    void testCase5() {
		int T = 100000;
        int requiredTime_[] = {1};
        vector<int> requiredTime(requiredTime_, requiredTime_ + (sizeof(requiredTime_) / sizeof(requiredTime_[0])));
        int expected__[] = {1, 1};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(5, expected_, solution.find(T, requiredTime));
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
        TheProgrammingContestDivTwoTest test;
        test.runTest(i);
    }
}
