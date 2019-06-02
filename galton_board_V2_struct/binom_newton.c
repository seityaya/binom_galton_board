#include <math.h>
#include "binom_struct.h"
#include "factorial_of_num.h"
#include "binom_work.h"

void binom_newton(BBD *bbd)
{
    for (int i = 0; i <= bbd->l; i++)
    {
        bbd->mas[i] = (int) ((fact(bbd->l)/(fact((bbd->l)-i)*fact(i))));
    }
    bimom_sum(bbd);
}

void binom_newtonnormalize(BBD *bbd)
{
    for (int i = 0; i <= bbd->l; i++)
    {
        bbd->mas[i] = (int)((((fact(bbd->l)/(fact((bbd->l)-i)*fact(i)))*pow(0.5, i)*pow(0.5, (bbd->l)-i)))*bbd->n);
    }
    bimom_sum(bbd);
}

