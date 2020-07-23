#include "gtest/gtest.h"
#include "../include/primelib/prime_app.hpp"

TEST(PrimeTests, FewPrimeTests) {
    EXPECT_EQ(get_nth_prime(0U), 2U);
    EXPECT_EQ(get_nth_prime(10U), 31U);
    EXPECT_EQ(get_nth_prime(20U), 73U);

    EXPECT_NE(get_nth_prime(970U), 7727U);
    EXPECT_EQ(get_nth_prime(980U), 7727U);
    EXPECT_EQ(get_nth_prime(990U), 7841U);

    EXPECT_EQ(get_nth_prime(50000U), 0U);
}