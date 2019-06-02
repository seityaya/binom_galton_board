#include <stdint.h>
#include "binom_struct.h"
#include <stdio.h>
void binom_print(BBD *bbd)
{
    printf("L:%d  \nN:%d  \nSUM:%d  \nSEED:%d\n", bbd->l, bbd->n, bbd->sum, bbd->seed);
    for (int i = 0; i <= bbd->l; i++)
    {
        printf("%+-d %d \n", (bbd->l)/2-i , bbd->mas[i]);
    }
}

void timestst_print(TSS *time)
{
    printf("ITER:%d  \nTIME: min:%d  ave:%0.2f  max:%d  \n", time->iter, time->min, time->ave, time->max);
}

void binom_screenout(char *name1,BBD *bbd1, TSS *tss1,
                     char *name2,BBD *bbd2, TSS *tss2,
                     char *name3,BBD *bbd3, TSS *tss3,
                     char *name4,BBD *bbd4, TSS *tss4)
{
    printf("L  %d\n", bbd1->l);
    printf("N  %d\n", bbd1->n);
    printf("I  %d\n", tss1->iter);
    printf("###   %s\t%s\t%s\t%s\n", name1, name2, name3, name4);
    printf("SUM   %d\t%d\t%d\t%d\n", bbd1->sum, bbd2->sum, bbd3->sum, bbd4->sum);
    printf("Tmin  %d\t\t%d\t%d\t%d\n", tss1->min, tss2->min, tss3->min, tss4->min);
    printf("Tave  %.2f\t\t%.2f\t%.2f\t%.2f\n", tss1->ave, tss2->ave, tss3->ave, tss4->ave);
    printf("Tmax  %d\t\t%d\t%d\t%d\n", tss1->max, tss2->max, tss3->max, tss4->max);
    printf("###\n");
    for (int i = 0; i <= bbd1->l; i++)
    {
        printf("%+-d    %d\t\t%d\t%d\t%d\n", (bbd1->l)/2-i , bbd1->mas[i], bbd2->mas[i], bbd3->mas[i], bbd4->mas[i]);
    }
}

void bimom_sum(BBD *bbd)
{
    bbd->sum = 0;
    for (int32_t i = 0; i <= bbd->l; i++)
    {
        bbd->sum += bbd->mas[i];
    }
}
//void binom_fileout();
