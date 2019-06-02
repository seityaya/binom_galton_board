#include <stdint.h>
#include <stdio.h>
#include "binom_struct.h"
#include <stdlib.h>
#include <omp.h>
#include "binom_work.h"

/*Последовательная реализация Распределения на доске Гальтона*/
void binom_galtonconsist(BBD *bbd)
{
    for (int32_t i = 0; i < bbd->l+1; i++)
    {
        bbd->mas[i] = 0;
    }
    srand(bbd->seed);
    int r = 0;
    for (int i = 0; i < bbd->n; i++)
    {
        for (int j = 0; j < bbd->l; j++)
        {
            r += rand() % 2;
        }
        bbd->mas[r]++;
        r = 0;
    }
    bimom_sum(bbd);
}

/*Паралельная реализация Распределения на доске Гальтона*/
void binom_galtonparalel(BBD *bbd)
{
    for (int32_t i = 0; i < bbd->l+1; i++)
    {
        bbd->mas[i] = 0;
    }
    srand(bbd->seed);
    int r = 0;
    for (int i = 0; i < bbd->n; i++)
    {
#pragma omp parallel for private (j) reduction (+: r)
        for (int j = 0; j < bbd->l; j++)
        {
            r += rand() % 2;
        }
        bbd->mas[r]++;
        r = 0;
    }
    bimom_sum(bbd);
}
