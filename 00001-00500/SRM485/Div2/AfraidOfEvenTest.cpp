#include "AfraidOfEven.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class AfraidOfEvenTest {

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

    AfraidOfEven solution;

    void testCase0() {
        int seq_[] = {1, 1, 3, 1, 5};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
        int expected__[] = {1, 2, 3, 4, 5};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(0, expected_, solution.restoreProgression(seq));
    }

    void testCase1() {
        int seq_[] = {9, 7, 5, 3, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
        int expected__[] = {9, 7, 5, 3, 1};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(1, expected_, solution.restoreProgression(seq));
    }

    void testCase2() {
        int seq_[] = {999, 999, 999, 999};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
        int expected__[] = {999, 999, 999, 999};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(2, expected_, solution.restoreProgression(seq));
    }

    void testCase3() {
        int seq_[] = {7, 47, 5, 113, 73, 179, 53};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
        int expected__[] = {14, 47, 80, 113, 146, 179, 212};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(3, expected_, solution.restoreProgression(seq));
    }

    void testCase4() {
        int seq_[] = {749, 999, 125, 1};
        vector<int> seq(seq_, seq_ + (sizeof(seq_) / sizeof(seq_[0])));
        int expected__[] = {1498, 999, 500, 1};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(4, expected_, solution.restoreProgression(seq));
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
        AfraidOfEvenTest test;
        test.runTest(i);
    }
}
