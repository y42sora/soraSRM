#include "WordAbbreviation.h"
#include <iostream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class WordAbbreviationTest {

    static void writeTo(std::ostream& out, const vector<string>& v) {
        out << '{';
        for (unsigned int i = 0; i < v.size(); i++) {
            out << '"' << v[i] << '"';
            if (i + 1 != v.size()) out << ", ";
        }
        out << '}';
    }

    static void assertEquals(int testCase, const vector<string>& expected, const vector<string>& actual) {
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

    WordAbbreviation solution;

    void testCase0() {
        string words_[] = {"abc", "def", "ghi"};
        vector<string> words(words_, words_ + (sizeof(words_) / sizeof(words_[0])));
        string expected__[] = {"a", "d", "g"};
        vector<string> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(0, expected_, solution.getAbbreviations(words));
    }

    void testCase1() {
        string words_[] = {"aaab", "aaac", "aaad"};
        vector<string> words(words_, words_ + (sizeof(words_) / sizeof(words_[0])));
        string expected__[] = {"aaab", "aaac", "aaad"};
        vector<string> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(1, expected_, solution.getAbbreviations(words));
    }

    void testCase2() {
        string words_[] = {"top", "coder", "contest"};
        vector<string> words(words_, words_ + (sizeof(words_) / sizeof(words_[0])));
        string expected__[] = {"t", "cod", "con"};
        vector<string> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(2, expected_, solution.getAbbreviations(words));
    }

    void testCase3() {
        string words_[] = {"bababaaaaa", "baaabaababa", "bbabaaabbaaabbabaabaabbbbbaabb", "aaababababbbbababbbaabaaaaaaaabbabbbaaab", "baaaaabaababbbaabbbabbababbbabbbbbbbbab"};
        vector<string> words(words_, words_ + (sizeof(words_) / sizeof(words_[0])));
        string expected__[] = {"bab", "baaab", "bb", "a", "baaaa"};
        vector<string> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(3, expected_, solution.getAbbreviations(words));
    }

    void testCase4() {
        string words_[] = {"oneword"};
        vector<string> words(words_, words_ + (sizeof(words_) / sizeof(words_[0])));
        string expected__[] = {"o"};
        vector<string> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(4, expected_, solution.getAbbreviations(words));
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
        WordAbbreviationTest test;
        test.runTest(i);
    }
}
