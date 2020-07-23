/*
 *  The header will store the constants associated with max prime value and the max size of array.
 *  This prime algorithm was chosen for the purpose of ease of implementation and it is a good starter constexpr implementation
 *
 */

// Modern header definition
#pragma once

#include <math.h>


static constexpr unsigned max_prime = 10000U;

// check out this link for the numbers of primes: https://primes.utm.edu/howmany.html
static constexpr unsigned prime_array_size = 1229U;

unsigned get_nth_prime(unsigned n);

struct Prime_Data;