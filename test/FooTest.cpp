#include <stdio.h>
#include <gtest/gtest.h>
#include "Foo.hpp"

TEST(SUM, SUM) {
    EXPECT_EQ(3, Foo::Sum(1, 2));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
