#include <gtest/gtest.h>

TEST(Tutorial, GoogleTest){
        int i = 7;
        int j = 10;
        int resalt = i * j;
        EXPECT_EQ(70, resalt);
        EXPECT_TRUE(resalt == 70);
}
