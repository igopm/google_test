#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    using namespace std;
    cout << "Google test 1" << endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
