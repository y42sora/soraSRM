#include "BunnyComputer.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class BunnyComputerTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    BunnyComputer solution;

    void testCase0() {
        int preference_[] = {3, 1, 4, 1, 5, 9, 2, 6};
        vector<int> preference(preference_, preference_ + (sizeof(preference_) / sizeof(preference_[0])));
		int k = 2;
		int expected_ = 28;
        assertEquals(0, expected_, solution.getMaximum(preference, k));
    }

    void testCase1() {
        int preference_[] = {3, 1, 4, 1, 5, 9, 2, 6};
        vector<int> preference(preference_, preference_ + (sizeof(preference_) / sizeof(preference_[0])));
		int k = 1;
		int expected_ = 31;
        assertEquals(1, expected_, solution.getMaximum(preference, k));
    }

    void testCase2() {
        int preference_[] = {1, 2, 3, 4, 5, 6};
        vector<int> preference(preference_, preference_ + (sizeof(preference_) / sizeof(preference_[0])));
		int k = 3;
		int expected_ = 14;
        assertEquals(2, expected_, solution.getMaximum(preference, k));
    }

    void testCase3() {
        int preference_[] = {979595, 979675, 980007, 980772, 981772, 985833, 999837, 979596, 979680, 980189, 980806, 981824, 986226, 987304, 979597, 979686, 980265, 981198, 981846, 981923, 987725, 979603, 979692, 980306, 981205, 981381, 982048, 988845, 979615, 979755, 980342, 980444, 981519, 983358, 989670, 979634, 979841, 979929, 980548, 981550, 984182, 989691, 979661, 979675, 979973, 980705, 981551, 985581, 999309};
        vector<int> preference(preference_, preference_ + (sizeof(preference_) / sizeof(preference_[0])));
		int k = 6;
		int expected_ = 41274115;
        assertEquals(3, expected_, solution.getMaximum(preference, k));
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
        BunnyComputerTest test;
        test.runTest(i);
    }
}
