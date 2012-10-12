#include "Cryptography.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class CryptographyTest {

    static void assertEquals(int testCase, const long long& expected, const long long& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    Cryptography solution;

    void testCase0() {
        int numbers_[] = {1, 2, 3};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
		long long expected_ = 12LL;
        assertEquals(0, expected_, solution.encrypt(numbers));
    }

    void testCase1() {
        int numbers_[] = {1, 3, 2, 1, 1, 3};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
		long long expected_ = 36LL;
        assertEquals(1, expected_, solution.encrypt(numbers));
    }

    void testCase2() {
        int numbers_[] = {1000, 999, 998, 997, 996, 995};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
		long long expected_ = 986074810223904000LL;
        assertEquals(2, expected_, solution.encrypt(numbers));
    }

    void testCase3() {
        int numbers_[] = {1, 1, 1, 1};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
		long long expected_ = 2LL;
        assertEquals(3, expected_, solution.encrypt(numbers));
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
        CryptographyTest test;
        test.runTest(i);
    }
}
