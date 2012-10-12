#include "KiwiJuiceEasy.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class KiwiJuiceEasyTest {

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

    KiwiJuiceEasy solution;

    void testCase0() {
        int capacities_[] = {20, 20};
        vector<int> capacities(capacities_, capacities_ + (sizeof(capacities_) / sizeof(capacities_[0])));
        int bottles_[] = {5, 8};
        vector<int> bottles(bottles_, bottles_ + (sizeof(bottles_) / sizeof(bottles_[0])));
        int fromId_[] = {0};
        vector<int> fromId(fromId_, fromId_ + (sizeof(fromId_) / sizeof(fromId_[0])));
        int toId_[] = {1};
        vector<int> toId(toId_, toId_ + (sizeof(toId_) / sizeof(toId_[0])));
        int expected__[] = {0, 13};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(0, expected_, solution.thePouring(capacities, bottles, fromId, toId));
    }

    void testCase1() {
        int capacities_[] = {10, 10};
        vector<int> capacities(capacities_, capacities_ + (sizeof(capacities_) / sizeof(capacities_[0])));
        int bottles_[] = {5, 8};
        vector<int> bottles(bottles_, bottles_ + (sizeof(bottles_) / sizeof(bottles_[0])));
        int fromId_[] = {0};
        vector<int> fromId(fromId_, fromId_ + (sizeof(fromId_) / sizeof(fromId_[0])));
        int toId_[] = {1};
        vector<int> toId(toId_, toId_ + (sizeof(toId_) / sizeof(toId_[0])));
        int expected__[] = {3, 10};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(1, expected_, solution.thePouring(capacities, bottles, fromId, toId));
    }

    void testCase2() {
        int capacities_[] = {30, 20, 10};
        vector<int> capacities(capacities_, capacities_ + (sizeof(capacities_) / sizeof(capacities_[0])));
        int bottles_[] = {10, 5, 5};
        vector<int> bottles(bottles_, bottles_ + (sizeof(bottles_) / sizeof(bottles_[0])));
        int fromId_[] = {0, 1, 2};
        vector<int> fromId(fromId_, fromId_ + (sizeof(fromId_) / sizeof(fromId_[0])));
        int toId_[] = {1, 2, 0};
        vector<int> toId(toId_, toId_ + (sizeof(toId_) / sizeof(toId_[0])));
        int expected__[] = {10, 10, 0};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(2, expected_, solution.thePouring(capacities, bottles, fromId, toId));
    }

    void testCase3() {
        int capacities_[] = {14, 35, 86, 58, 25, 62};
        vector<int> capacities(capacities_, capacities_ + (sizeof(capacities_) / sizeof(capacities_[0])));
        int bottles_[] = {6, 34, 27, 38, 9, 60};
        vector<int> bottles(bottles_, bottles_ + (sizeof(bottles_) / sizeof(bottles_[0])));
        int fromId_[] = {1, 2, 4, 5, 3, 3, 1, 0};
        vector<int> fromId(fromId_, fromId_ + (sizeof(fromId_) / sizeof(fromId_[0])));
        int toId_[] = {0, 1, 2, 4, 2, 5, 3, 1};
        vector<int> toId(toId_, toId_ + (sizeof(toId_) / sizeof(toId_[0])));
        int expected__[] = {0, 14, 65, 35, 25, 35};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(3, expected_, solution.thePouring(capacities, bottles, fromId, toId));
    }

    void testCase4() {
        int capacities_[] = {700000, 800000, 900000, 1000000};
        vector<int> capacities(capacities_, capacities_ + (sizeof(capacities_) / sizeof(capacities_[0])));
        int bottles_[] = {478478, 478478, 478478, 478478};
        vector<int> bottles(bottles_, bottles_ + (sizeof(bottles_) / sizeof(bottles_[0])));
        int fromId_[] = {2, 3, 2, 0, 1};
        vector<int> fromId(fromId_, fromId_ + (sizeof(fromId_) / sizeof(fromId_[0])));
        int toId_[] = {0, 1, 1, 3, 2};
        vector<int> toId(toId_, toId_ + (sizeof(toId_) / sizeof(toId_[0])));
        int expected__[] = {0, 156956, 900000, 856956};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(4, expected_, solution.thePouring(capacities, bottles, fromId, toId));
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
        KiwiJuiceEasyTest test;
        test.runTest(i);
    }
}
