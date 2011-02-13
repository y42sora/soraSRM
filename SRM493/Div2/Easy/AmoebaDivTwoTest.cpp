#include "AmoebaDivTwo.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class AmoebaDivTwoTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    AmoebaDivTwo solution;

    void testCase0() {
        string table_[] = {"MA"};
        vector<string> table(table_, table_ + (sizeof(table_) / sizeof(table_[0])));
		int K = 2;
		int expected_ = 0;
        assertEquals(0, expected_, solution.count(table, K));
    }

    void testCase1() {
        string table_[] = {"AAA", "AMA", "AAA"};
        vector<string> table(table_, table_ + (sizeof(table_) / sizeof(table_[0])));
		int K = 3;
		int expected_ = 4;
        assertEquals(1, expected_, solution.count(table, K));
    }

    void testCase2() {
        string table_[] = {"AA", "AA", "AA"};
        vector<string> table(table_, table_ + (sizeof(table_) / sizeof(table_[0])));
		int K = 2;
		int expected_ = 7;
        assertEquals(2, expected_, solution.count(table, K));
    }

    void testCase3() {
        string table_[] = {"MMM", "MMM", "MMM"};
        vector<string> table(table_, table_ + (sizeof(table_) / sizeof(table_[0])));
		int K = 1;
		int expected_ = 0;
        assertEquals(3, expected_, solution.count(table, K));
    }

    void testCase4() {
        string table_[] = {"AAM", "MAM", "AAA"};
        vector<string> table(table_, table_ + (sizeof(table_) / sizeof(table_[0])));
		int K = 1;
		int expected_ = 6;
        assertEquals(4, expected_, solution.count(table, K));
    }

    void testCase5() {
        string table_[] = {"AAA", "AAM", "AAA"};
        vector<string> table(table_, table_ + (sizeof(table_) / sizeof(table_[0])));
		int K = 2;
		int expected_ = 9;
        assertEquals(5, expected_, solution.count(table, K));
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
        AmoebaDivTwoTest test;
        test.runTest(i);
    }
}
