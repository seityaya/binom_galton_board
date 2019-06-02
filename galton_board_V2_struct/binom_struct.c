#include "binom_struct.h"
#include <stdint.h>
#include <malloc.h>
#include <time.h>

void BBD_init(BBD *bbd, int l, int n)
{
    bbd->l = l;
    bbd->n = n;
    bbd->seed = (uint32_t)(time(0));
    bbd->sum = 0;
    bbd->mas = malloc((uint32_t)(l+1) * sizeof(int));
}

void TSS_init(TSS *tss, uint32_t iter)
{
    tss->iter = iter;
    tss->start = 0;
    tss->stop = 0;
    tss->min = 0;
    tss->max = 0;
    tss->ave = 0;
    tss->difmas = malloc((uint32_t)(iter) * sizeof(int));
}
