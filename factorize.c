#include "factor.h"

void factorize(unsigned long num)
{
    unsigned long i;

    for(i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf ("%lu=%lu*%lu\n", num, i, num / i);
            return;
        }
    }
}