#include "Filtering.h"
#include <iostream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class FilteringTest {

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

    Filtering solution;

    void testCase0() {
        int sizes_[] = {3, 4, 5, 6, 7};
        vector<int> sizes(sizes_, sizes_ + (sizeof(sizes_) / sizeof(sizes_[0])));
		string outcome = "AAAAA";
        int expected__[] = {3, 7};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(0, expected_, solution.designFilter(sizes, outcome));
    }

    void testCase1() {
        int sizes_[] = {3, 4, 5, 6, 7};
        vector<int> sizes(sizes_, sizes_ + (sizeof(sizes_) / sizeof(sizes_[0])));
		string outcome = "AARAA";
        vector<int> expected_;
        assertEquals(1, expected_, solution.designFilter(sizes, outcome));
    }

    void testCase2() {
        int sizes_[] = {3, 4, 5, 6, 7};
        vector<int> sizes(sizes_, sizes_ + (sizeof(sizes_) / sizeof(sizes_[0])));
		string outcome = "RAAAA";
        int expected__[] = {4, 7};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(2, expected_, solution.designFilter(sizes, outcome));
    }

    void testCase3() {
        int sizes_[] = {68, 57, 7, 41, 76, 53, 43, 77, 84, 52, 34, 48, 27, 75, 36};
        vector<int> sizes(sizes_, sizes_ + (sizeof(sizes_) / sizeof(sizes_[0])));
		string outcome = "RARRRARRRARARRR";
        int expected__[] = {48, 57};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(3, expected_, solution.designFilter(sizes, outcome));
    }

    void testCase4() {
        int sizes_[] = {26, 81, 9, 14, 43, 77, 55, 57, 12, 34, 29, 79, 40, 25, 50};
        vector<int> sizes(sizes_, sizes_ + (sizeof(sizes_) / sizeof(sizes_[0])));
		string outcome = "ARAAARRARARARAA";
        vector<int> expected_;
        assertEquals(4, expected_, solution.designFilter(sizes, outcome));
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
        FilteringTest test;
        test.runTest(i);
    }
}
