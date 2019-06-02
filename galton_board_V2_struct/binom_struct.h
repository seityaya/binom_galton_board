#ifndef STRUCT_H
#define STRUCT_H
#include <stdint.h>
struct TSS{
    uint32_t iter;           //количество итраций
    uint32_t start;
    uint32_t stop;
    uint32_t min;
    uint32_t max;
    double ave;         //среднее время работы функции
    uint32_t *difmas;
};

struct BBD {
    int32_t l;              //длинна пирамиды (степень бинома)
    int32_t n;              //количество шариков
    uint32_t seed;           //seed
    int32_t sum;
    int32_t *mas;           //массив для распределения

};

typedef struct  BBD BBD;
typedef struct  TSS TSS;

void BBD_init(BBD *bbd, int l, int n);
void TSS_init(TSS *tss, uint32_t iter);
#endif // STRUCT_H
