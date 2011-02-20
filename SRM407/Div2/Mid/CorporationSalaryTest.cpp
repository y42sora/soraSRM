#include "CorporationSalary.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class CorporationSalaryTest {

    static void assertEquals(int testCase, const long long& expected, const long long& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    CorporationSalary solution;

    void testCase0() {
        string relations_[] = {"N"};
        vector<string> relations(relations_, relations_ + (sizeof(relations_) / sizeof(relations_[0])));
		long long expected_ = 1LL;
        assertEquals(0, expected_, solution.totalSalary(relations));
    }

    void testCase1() {
        string relations_[] = {"NNYN", "NNYN", "NNNN", "NYYN"};
        vector<string> relations(relations_, relations_ + (sizeof(relations_) / sizeof(relations_[0])));
		long long expected_ = 5LL;
        assertEquals(1, expected_, solution.totalSalary(relations));
    }

    void testCase2() {
        string relations_[] = {"NNNNNN", "YNYNNY", "YNNNNY", "NNNNNN", "YNYNNN", "YNNYNN"};
        vector<string> relations(relations_, relations_ + (sizeof(relations_) / sizeof(relations_[0])));
		long long expected_ = 17LL;
        assertEquals(2, expected_, solution.totalSalary(relations));
    }

    void testCase3() {
        string relations_[] = {"NYNNYN", "NNNNNN", "NNNNNN", "NNYNNN", "NNNNNN", "NNNYYN"};
        vector<string> relations(relations_, relations_ + (sizeof(relations_) / sizeof(relations_[0])));
		long long expected_ = 8LL;
        assertEquals(3, expected_, solution.totalSalary(relations));
    }

    void testCase4() {
        string relations_[] = {"NNNN", "NNNN", "NNNN", "NNNN"};
        vector<string> relations(relations_, relations_ + (sizeof(relations_) / sizeof(relations_[0])));
		long long expected_ = 4LL;
        assertEquals(4, expected_, solution.totalSalary(relations));
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
        CorporationSalaryTest test;
        test.runTest(i);
    }
}
