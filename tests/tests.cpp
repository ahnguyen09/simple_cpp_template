#include "gtest/gtest.h"
#include "project_lib.h"

TEST(S2_Roman2Int, T1)
{
    EXPECT_EQ(romanToInt(std::string("MCMXIV")), 1914);
    EXPECT_EQ(romanToInt(std::string("IV")), 4);
    EXPECT_EQ(romanToInt(std::string("VI")), 6);
    EXPECT_EQ(romanToInt(std::string("V")), 5);
}
