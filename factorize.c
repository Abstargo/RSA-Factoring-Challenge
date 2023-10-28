#include "factor.h"

void factorize(unsigned long long num)
{
    unsigned long long i;

    for(i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf ("%llu=%llu*%llu\n", num, i, num / i);
            return;
        }
    }
}
