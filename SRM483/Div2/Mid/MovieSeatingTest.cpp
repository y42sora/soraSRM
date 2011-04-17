#include "MovieSeating.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class MovieSeatingTest {

    static void assertEquals(int testCase, const long long& expected, const long long& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    MovieSeating solution;

    void testCase0() {
		int numFriends = 2;
        string hall_[] = {".#..", ".##.", "...."};
        vector<string> hall(hall_, hall_ + (sizeof(hall_) / sizeof(hall_[0])));
		long long expected_ = 34LL;
        assertEquals(0, expected_, solution.getSeatings(numFriends, hall));
    }

    void testCase1() {
		int numFriends = 2;
        string hall_[] = {"..#", ".##", "..."};
        vector<string> hall(hall_, hall_ + (sizeof(hall_) / sizeof(hall_[0])));
		long long expected_ = 16LL;
        assertEquals(1, expected_, solution.getSeatings(numFriends, hall));
    }

    void testCase2() {
		int numFriends = 5;
        string hall_[] = {"..####..", ".###.##.", ".######.", "#.#.#.#."};
        vector<string> hall(hall_, hall_ + (sizeof(hall_) / sizeof(hall_[0])));
		long long expected_ = 0LL;
        assertEquals(2, expected_, solution.getSeatings(numFriends, hall));
    }

    void testCase3() {
		int numFriends = 1;
        string hall_[] = {".","."};
        vector<string> hall(hall_, hall_ + (sizeof(hall_) / sizeof(hall_[0])));
		long long expected_ = 2;
        assertEquals(3, expected_, solution.getSeatings(numFriends, hall));
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
        MovieSeatingTest test;
        test.runTest(i);
    }
}
