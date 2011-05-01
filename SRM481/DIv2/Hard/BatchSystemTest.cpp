#include "BatchSystem.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class BatchSystemTest {

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

    BatchSystem solution;

    void testCase0() {
        int duration_[] = {409266933, 334294512, 374858518, 334294512, 334294512, 334294512, 897422581, 334294512, 897422581, 334294512, 410796098, 767293783, 769374442, 897422581, 199564812, 451915392, 897422581, 897422581, 769374442, 334294512, 334294512, 769374442, 334294512, 897422581, 46657114, 897422581, 119380066, 897422581, 897422581, 897422581, 769374442, 769374442, 275135858, 191207668, 2080659, 287637398, 897422581, 769374442, 334294512, 697857769, 168899841, 897422581, 334294512, 897422581, 897422581, 34711091, 334294512, 769374442, 897422581};
        vector<int> duration(duration_, duration_ + (sizeof(duration_) / sizeof(duration_[0])));
        string user_[] = {"wyAkOxGQVFqUOENESdgwkEloXm", "hopKfGIsTfkWSQlJnTOEKpFiGcHdkZnsrpwnZg", "srKzHSQEdMyZDrIgaURKtqkXwfv fGhfPXTWgA", "lsCicxwEHLcHAyPz", "SKDZtw mHqb", "WkCgjdesWPJawJLyWtbVxigARaqVjqyfhiuae", "vOMQfTpIDEJxyGFDqbKBkGWgWUXcwAGuLryxNFo", "kfGjOBQtkQ", "vzYewEESoRyzOWfyfCffjLONWnKk", "AKpBVFMjMNkBPVqRheQRTAKwOWDQgpOR", "Kxm", "zEtDZGewxWhqrRnCkbEzLkrrDe", "SdzpcUvvUcyKKK", "fZmaORPpaCBXk", "hdIWPeANoqqkc", "Kxm", "rCjxOq", "fFKkIyoJWhlejGbphDa", "vavQwWDMWdeuJRrymeJ", "AYqPM", "nNHai", "YPAMJTbWZtOAZaDPvUjHdszpxB", "KtNBGzNENDotaAgXrAdBPWUzsrEMbfdNQgfDp", "buzueMagGxnoTSvGzxxornbahz", "DqGbaLz", "HrcPpBjaHufENhpawkRQjMqKXQjQyPqdFOdunDNHWuCnzPznm", "srKzHSQEdMyZDrIgaURKtqkXwfv fGhfPXTWgA", "QfLTxkAQHtEqzmpWKaOryJyEGywd", "JuSxcxtgOvtbIrBPvfxdrdIyhpohleShYNxzOwkQmCJ", "hxnD", "pIbvyycYmeDEeiI", "JLUeyevSAjSExvMpSz", "srKzHSQEdMyZDrIgaURKtqkXwfv fGhfPXTWgA", "wyAkOxGQVFqUOENESdgwkEloXm", "zEtDZGewxWhqrRnCkbEzLkrrDe", "DqGbaLz", "fyiwhgMGvYTajW", "ydfRrNZVNrGBrWvrgbxfJaLzjpdnZzwdhpYhYKHCjBJfwSHPMD", "oZoabkvHdqZhppviohpfoaTXKK", "hdIWPeANoqqkc", "wyAkOxGQVFqUOENESdgwkEloXm", "LDKIyahAGMZSsOkqQeJdEPnPNfHcxxkvlAZDFcyIkEoFhBZo", "DHiQZcWvBzYfKEYCALrPhzBHdvKSxAgewzIFOdc", "ULDaYylvFdKzQpLEMKWLmkadNhysGvWohkbwZrIZlhNEbMtgUC", "MKjHu", "Kxm", "sBHTcctuoiYYorjGcRbHfjFrJWCDBClOMZiFdg", "VnGEodS viFKvu", "KkxFwrmZKC"};
        vector<string> user(user_, user_ + (sizeof(user_) / sizeof(user_[0])));
        int expected__[] = {1, 3, 4, 5, 7, 9, 19, 20, 22, 24, 35, 38, 42, 46, 0, 33, 40, 2, 26, 32, 11, 34, 12, 18, 21, 30, 31, 37, 47, 6, 8, 10, 15, 45, 13, 14, 39, 16, 17, 23, 25, 27, 28, 29, 36, 41, 43, 44, 48};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(0, expected_, solution.schedule(duration, user));
    }

    void testCase1() {
        int duration_[] = {200, 200, 200};
        vector<int> duration(duration_, duration_ + (sizeof(duration_) / sizeof(duration_[0])));
        string user_[] = {"Gil", "Sarah", "Warrick"};
        vector<string> user(user_, user_ + (sizeof(user_) / sizeof(user_[0])));
        int expected__[] = {0, 1, 2};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(1, expected_, solution.schedule(duration, user));
    }

    void testCase2() {
        int duration_[] = {100, 200, 50};
        vector<int> duration(duration_, duration_ + (sizeof(duration_) / sizeof(duration_[0])));
        string user_[] = {"Horatio Caine", "horatio caine", "YEAAAAAAH"};
        vector<string> user(user_, user_ + (sizeof(user_) / sizeof(user_[0])));
        int expected__[] = {2, 0, 1};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(2, expected_, solution.schedule(duration, user));
    }

    void testCase3() {

        int duration_[] = {1000000000, 1000000000, 1000000000, 1000000000, 1, 2, 3};
        vector<int> duration(duration_, duration_ + (sizeof(duration_) / sizeof(duration_[0])));
        string user_[] = {"X", "X", "X", "X", "Y", "Y", "Y"};
        vector<string> user(user_, user_ + (sizeof(user_) / sizeof(user_[0])));
        int expected__[] = {4, 5, 6, 0, 1, 2, 3};
        vector<int> expected_(expected__, expected__ + (sizeof(expected__) / sizeof(expected__[0])));
        assertEquals(3, expected_, solution.schedule(duration, user));
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
    for (int i = 0; i < 1; i++) {
        BatchSystemTest test;
        test.runTest(i);
    }
}
