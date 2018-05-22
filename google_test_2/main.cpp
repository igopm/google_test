#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    using namespace std;
    cout << "Google test 2" << endl;

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

//#include <iostream>
//int main(){
//    std::cout << "\\" << std::endl;
//    std::cout << "/" << std::endl;
//    return 0;
//}
