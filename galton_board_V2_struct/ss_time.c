#include "binom_struct.h"
#include <stdio.h>
#include <time.h>

void timestst(TSS *time, void(*binom)(BBD *bbd), BBD *bbd)
{
    for (uint32_t i = 0; i < time->iter; i++)
    {
        time->start = (uint32_t)clock();
        binom (bbd);
        time->stop = (uint32_t)clock();
        time->difmas[i] = (uint32_t)(time->stop - time->start);
    }

    for (int j = 0; j <= (int)(time->iter-1); j++)
    {
        if (time->difmas[j] < time->difmas[j-1])
        {
            time->difmas[j] = time->difmas[j] + time->difmas[j-1];
            time->difmas[j-1] = time->difmas[j] - time->difmas[j-1];
            time->difmas[j] = time->difmas[j] - time->difmas[j-1];
        }
    }
    for (uint32_t i = 0; i < time->iter; i++)
    {
        time->ave += time->difmas[i];
    }
    time->min = time->difmas[0];
    time->max = time->difmas[time->iter - 1];
    time->ave = time->ave/time->iter;
}
