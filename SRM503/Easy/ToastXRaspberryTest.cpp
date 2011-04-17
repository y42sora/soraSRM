#include "ToastXRaspberry.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class ToastXRaspberryTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    ToastXRaspberry solution;

    void testCase0() {
		int upper_limit = 4;
		int layer_count = 13;
		int expected_ = 4;
        assertEquals(0, expected_, solution.apply(upper_limit, layer_count));
    }

    void testCase1() {
		int upper_limit = 8;
		int layer_count = 5;
		int expected_ = 1;
        assertEquals(1, expected_, solution.apply(upper_limit, layer_count));
    }

    void testCase2() {
		int upper_limit = 73;
		int layer_count = 265;
		int expected_ = 4;
        assertEquals(2, expected_, solution.apply(upper_limit, layer_count));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 3; i++) {
        ToastXRaspberryTest test;
        test.runTest(i);
    }
}
