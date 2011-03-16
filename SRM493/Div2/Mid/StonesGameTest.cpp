#include "StonesGame.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class StonesGameTest {

    static void assertEquals(int testCase, const string& expected, const string& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << '"' << expected << '"' << "> but was: <" << '"' << actual << '"' << '>' << endl;
        }
    }

    StonesGame solution;

    void testCase0() {
		int N = 3;
		int M = 1;
		int K = 1;
		int L = 2;
		string expected_ = "Draw";
        assertEquals(0, expected_, solution.winner(N, M, K, L));
    }

    void testCase1() {
		int N = 5;
		int M = 1;
		int K = 2;
		int L = 2;
		string expected_ = "Romeo";
        assertEquals(1, expected_, solution.winner(N, M, K, L));
    }

    void testCase2() {
		int N = 5;
		int M = 5;
		int K = 2;
		int L = 3;
		string expected_ = "Strangelet";
        assertEquals(2, expected_, solution.winner(N, M, K, L));
    }

    void testCase3() {
		int N = 5;
		int M = 5;
		int K = 2;
		int L = 2;
		string expected_ = "Draw";
        assertEquals(3, expected_, solution.winner(N, M, K, L));
    }

    void testCase4() {
		int N = 1000000;
		int M = 804588;
		int K = 705444;
		int L = 292263;
		string expected_ = "Romeo";
        assertEquals(4, expected_, solution.winner(N, M, K, L));
    }

    void testCase5() {
		int N = 1000000;
		int M = 100000;
		int K = 500000;
		int L = 600000;
		string expected_ = "Strangelet";
        assertEquals(5, expected_, solution.winner(N, M, K, L));
    }


    void testCase6() {
		int N = 6;
		int M = 3;
		int K = 5;
		int L = 1;
		string expected_ = "Draw";
        assertEquals(6, expected_, solution.winner(N, M, K, L));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            case (4): testCase4(); break;
            case (5): testCase5(); break;
            case (6): testCase6(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 7; i++) {
        StonesGameTest test;
        test.runTest(i);
    }
}
