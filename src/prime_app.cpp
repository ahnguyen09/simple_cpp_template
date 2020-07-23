#include <iostream>
#include "../include/primelib/prime_app.hpp"
#include "gtest/gtest.h"

struct Prime_Data
{
    bool is_prime[max_prime]{};
    unsigned prime_value[prime_array_size]{};

    // Constructor for the data using SieveOfEratosthenes
    // https://www.geeksforgeeks.org/program-to-find-the-nth-prime-number/

    constexpr Prime_Data() {
        for (auto &b : Prime_Data::is_prime) {
            b = true;
        }

        /* cppcheck recommended using std fill, however, std fill was unable to initialize the constexpr is_prime array
        auto is_p = Prime_Data::is_prime;
        std::fill(is_p, is_p + sizeof(is_p), true);
        */

        for (int p = 2; p * p < max_prime; p++) {
            // If IsPrime[p] is not changed, then it is a prime
            if (Prime_Data::is_prime[p] == true) {
                // Update all multiples of p greater than or
                // equal to the square of it
                // numbers which are multiple of p and are
                // less than p^2 are already been marked.
                for (int i = p * p; i < max_prime; i += p)
                    Prime_Data::is_prime[i] = false;
            }
        }

        // Store all prime numbers
        int n = 0;
        for (int p = 2; p < max_prime; p++) {
            if (Prime_Data::is_prime[p] && n < prime_array_size)
                Prime_Data::prime_value[n++] = static_cast<unsigned>(p);
        }
    }
};

constexpr Prime_Data prime_data = Prime_Data();

unsigned get_nth_prime(unsigned n) {
    return n >= 0 && n < prime_array_size ? prime_data.prime_value[n] : 0;
}

int main(int argc, char **argv) {
    std::cout << "Hello Primes!!\n";

    for (auto n = 100; n < 140; n += 3) {
        std::cout << "The " << n << "th prime is: " << get_nth_prime(n) << "\n";
    }

    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}