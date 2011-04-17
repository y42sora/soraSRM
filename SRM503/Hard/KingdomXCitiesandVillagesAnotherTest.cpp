#include "KingdomXCitiesandVillagesAnother.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class KingdomXCitiesandVillagesAnotherTest {

    static void assertEquals(int testCase, double expected, double actual) {
        double delta = max(1e-9, 1e-9 * abs(expected));
        if (abs(expected - actual) <= delta) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout.precision(24);
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    KingdomXCitiesandVillagesAnother solution;

    void testCase0() {
        int cityX_[] = {1};
        vector<int> cityX(cityX_, cityX_ + (sizeof(cityX_) / sizeof(cityX_[0])));
        int cityY_[] = {1};
        vector<int> cityY(cityY_, cityY_ + (sizeof(cityY_) / sizeof(cityY_[0])));
        int villageX_[] = {2, 3};
        vector<int> villageX(villageX_, villageX_ + (sizeof(villageX_) / sizeof(villageX_[0])));
        int villageY_[] = {1, 1};
        vector<int> villageY(villageY_, villageY_ + (sizeof(villageY_) / sizeof(villageY_[0])));
		double expected_ = 2.0;
        assertEquals(0, expected_, solution.determineLength(cityX, cityY, villageX, villageY));
    }

    void testCase1() {
        int cityX_[] = {1, 2};
        vector<int> cityX(cityX_, cityX_ + (sizeof(cityX_) / sizeof(cityX_[0])));
        int cityY_[] = {1, 1};
        vector<int> cityY(cityY_, cityY_ + (sizeof(cityY_) / sizeof(cityY_[0])));
        int villageX_[] = {1, 2};
        vector<int> villageX(villageX_, villageX_ + (sizeof(villageX_) / sizeof(villageX_[0])));
        int villageY_[] = {2, 2};
        vector<int> villageY(villageY_, villageY_ + (sizeof(villageY_) / sizeof(villageY_[0])));
		double expected_ = 2.0;
        assertEquals(1, expected_, solution.determineLength(cityX, cityY, villageX, villageY));
    }

    void testCase2() {
        int cityX_[] = {920978};
        vector<int> cityX(cityX_, cityX_ + (sizeof(cityX_) / sizeof(cityX_[0])));
        int cityY_[] = {375185};
        vector<int> cityY(cityY_, cityY_ + (sizeof(cityY_) / sizeof(cityY_[0])));
        int villageX_[] = {228692};
        vector<int> villageX(villageX_, villageX_ + (sizeof(villageX_) / sizeof(villageX_[0])));
        int villageY_[] = {991009};
        vector<int> villageY(villageY_, villageY_ + (sizeof(villageY_) / sizeof(villageY_[0])));
		double expected_ = 926552.2676956762;
        assertEquals(2, expected_, solution.determineLength(cityX, cityY, villageX, villageY));
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
        KingdomXCitiesandVillagesAnotherTest test;
        test.runTest(i);
    }
}
