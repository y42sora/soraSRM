#include "ConsecutiveNumbers.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class ConsecutiveNumbersTest {

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

    ConsecutiveNumbers solution;

    void testCase0() {
        int numbers_[] = {10, 7, 12, 8, 11};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
        int expected__[] = {9};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(0, expected_, solution.missingNumber(numbers));
    }

    void testCase1() {
        int numbers_[] = {3, 6};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
        vector<int> expected_;
        assertEquals(1, expected_, solution.missingNumber(numbers));
    }

    void testCase2() {
        int numbers_[] = {5, 6, 7, 8};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
        int expected__[] = {4, 9};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(2, expected_, solution.missingNumber(numbers));
    }

    void testCase3() {
        int numbers_[] = {1000000000};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
        int expected__[] = {999999999, 1000000001};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(3, expected_, solution.missingNumber(numbers));
    }

    void testCase4() {
        int numbers_[] = {1, 6, 9, 3, 8, 12, 7, 4, 11, 5, 10};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
        int expected__[] = {2};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(4, expected_, solution.missingNumber(numbers));
    }

    void testCase5() {
        int numbers_[] = {1};
        vector<int> numbers(numbers_, numbers_ + (sizeof(numbers_) / sizeof(numbers_[0])));
        int expected__[] = {2};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(5, expected_, solution.missingNumber(numbers));
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
        ConsecutiveNumbersTest test;
        test.runTest(i);
    }
}
