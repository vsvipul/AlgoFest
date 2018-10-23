#include <cstdio>

/* This is an efficient algorithm to calculate a to the power n
 * where a and n are natural numbers (1 .. infinity), a is the base,
 * and n is the exponent.
 * let's say we want to calculate 7^5
 * so,
 * 7^5 = 7^4 * 7
 * 7^4 = 7^2 * 7^2
 * 7^2 = 7^1 * 7^1
 * 7^1 = 7^0 * 7
 * 7^0 = 1
 * therefore,
 * 7^1 = 1 * 7 = 7
 * 7^2 = 7 * 7 = 49
 * 7^4 = 49 * 49 = 2401 
 * 7^5 = 2401 * 7 = 16807
 * This algorithm runs approximately at O(log n)*/

unsigned long long int fastExponent(int base, int exponent)
{
    if(exponent == 0)
        return 1;

    if(exponent % 2 != 0)
        return fastExponent(base, exponent - 1) * base;
    else
    {
        unsigned long long int x = fastExponent(base, exponent / 2);
        return x * x;
    }
}

int main()
{
    printf("%llu\n", fastExponent(2, 3));
    printf("%llu\n", fastExponent(9, 3));
    printf("%llu\n", fastExponent(2, 60));
    printf("%llu\n", fastExponent(12, 11));
    return 0;
}