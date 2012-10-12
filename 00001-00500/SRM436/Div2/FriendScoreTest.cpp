#include "FriendScore.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class FriendScoreTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    FriendScore solution;

    void testCase0() {
        string friends_[] = {"NNN", "NNN", "NNN"};
        vector<string> friends(friends_, friends_ + (sizeof(friends_) / sizeof(friends_[0])));
		int expected_ = 0;
        assertEquals(0, expected_, solution.highestScore(friends));
    }

    void testCase1() {
        string friends_[] = {"NYY", "YNY", "YYN"};
        vector<string> friends(friends_, friends_ + (sizeof(friends_) / sizeof(friends_[0])));
		int expected_ = 2;
        assertEquals(1, expected_, solution.highestScore(friends));
    }

    void testCase2() {
        string friends_[] = {"NYNNN", "YNYNN", "NYNYN", "NNYNY", "NNNYN"};
        vector<string> friends(friends_, friends_ + (sizeof(friends_) / sizeof(friends_[0])));
		int expected_ = 4;
        assertEquals(2, expected_, solution.highestScore(friends));
    }

    void testCase3() {
        string friends_[] = {"NNNNYNNNNN", "NNNNYNYYNN", "NNNYYYNNNN", "NNYNNNNNNN", "YYYNNNNNNY", "NNYNNNNNYN", "NYNNNNNYNN", "NYNNNNYNNN", "NNNNNYNNNN", "NNNNYNNNNN"};
        vector<string> friends(friends_, friends_ + (sizeof(friends_) / sizeof(friends_[0])));
		int expected_ = 8;
        assertEquals(3, expected_, solution.highestScore(friends));
    }

    void testCase4() {
        string friends_[] = {"NNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNN", "NNYYNNNNNNNNNNN", "NNNNNYNNNNNYNNN", "NNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "YNNYYNNNNYNNNNN"};
        vector<string> friends(friends_, friends_ + (sizeof(friends_) / sizeof(friends_[0])));
		int expected_ = 6;
        assertEquals(4, expected_, solution.highestScore(friends));
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
        FriendScoreTest test;
        test.runTest(i);
    }
}
