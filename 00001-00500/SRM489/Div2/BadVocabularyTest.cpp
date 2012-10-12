#include "BadVocabulary.h"
#include <iostream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class BadVocabularyTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    BadVocabulary solution;

    void testCase0() {
		string badPrefix = "bug";
		string badSuffix = "bug";
		string badSubstring = "bug";
        string vocabulary_[] = {"buggy", "debugger", "debug"};
        vector<string> vocabulary(vocabulary_, vocabulary_ + (sizeof(vocabulary_) / sizeof(vocabulary_[0])));
		int expected_ = 3;
        assertEquals(0, expected_, solution.count(badPrefix, badSuffix, badSubstring, vocabulary));
    }

    void testCase1() {
		string badPrefix = "a";
		string badSuffix = "b";
		string badSubstring = "c";
        string vocabulary_[] = {"a", "b", "tco"};
        vector<string> vocabulary(vocabulary_, vocabulary_ + (sizeof(vocabulary_) / sizeof(vocabulary_[0])));
		int expected_ = 3;
        assertEquals(1, expected_, solution.count(badPrefix, badSuffix, badSubstring, vocabulary));
    }

    void testCase2() {
		string badPrefix = "cut";
		string badSuffix = "sore";
		string badSubstring = "scar";
        string vocabulary_[] = {"scary", "oscar"};
        vector<string> vocabulary(vocabulary_, vocabulary_ + (sizeof(vocabulary_) / sizeof(vocabulary_[0])));
		int expected_ = 0;
        assertEquals(2, expected_, solution.count(badPrefix, badSuffix, badSubstring, vocabulary));
    }

    void testCase3() {
		string badPrefix = "bar";
		string badSuffix = "else";
		string badSubstring = "foo";
        string vocabulary_[] = {"foofoofoo", "foobar", "elsewhere"};
        vector<string> vocabulary(vocabulary_, vocabulary_ + (sizeof(vocabulary_) / sizeof(vocabulary_[0])));
		int expected_ = 1;
        assertEquals(3, expected_, solution.count(badPrefix, badSuffix, badSubstring, vocabulary));
    }

    void testCase4() {
		string badPrefix = "pre";
		string badSuffix = "s";
		string badSubstring = "all";
        string vocabulary_[] = {"all", "coders", "be", "prepared", "for", "the", "challenge", "phase"};
        vector<string> vocabulary(vocabulary_, vocabulary_ + (sizeof(vocabulary_) / sizeof(vocabulary_[0])));
		int expected_ = 3;
        assertEquals(4, expected_, solution.count(badPrefix, badSuffix, badSubstring, vocabulary));
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
        BadVocabularyTest test;
        test.runTest(i);
    }
}
