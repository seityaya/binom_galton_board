#include "binom_struct.h"
#include "binom_newton.h"
#include "binom_galton.h"
#include "ss_time.h"
#include "binom_work.h"

#define L 18     //18 max
#define N 100000 //(int)(pow(2, L))
#define I 5

int main()
{
    TSS timess_newton_bd;
    TSS timess_normalize_bd;
    TSS timess_consist_bd;
    TSS timess_paralel_bd;
    TSS_init(&timess_newton_bd, I);
    TSS_init(&timess_normalize_bd, I);
    TSS_init(&timess_consist_bd, I);
    TSS_init(&timess_paralel_bd, I);

    BBD newton_bd;
    BBD normalize_bd;
    BBD consist_bd;
    BBD paralel_bd;
    BBD_init(&newton_bd, L, N);
    BBD_init(&normalize_bd, L, N);
    BBD_init(&consist_bd, L, N);
    BBD_init(&paralel_bd, L, N);

    timestst(&timess_newton_bd, binom_newton, &newton_bd);
    timestst(&timess_normalize_bd, binom_newtonnormalize, &normalize_bd);
    timestst(&timess_consist_bd, binom_galtonconsist, &consist_bd);
    timestst(&timess_paralel_bd, binom_galtonparalel, &paralel_bd);

    binom_screenout(
                "Newton",   &newton_bd,    &timess_newton_bd,
                "Normalize",&normalize_bd, &timess_normalize_bd,
                "Consist",  &consist_bd,   &timess_consist_bd,
                "Paralel",  &paralel_bd,   &timess_paralel_bd);


//    binom_newton(&newton_bd);
//    binom_newtonnormalize(&normalize_bd);
//    binom_galtonconsist(&consist_bd);
//    binom_galtonparalel(&paralel_bd);
//    printf("Newton \n");
//    binom_print(&newton_bd);
//    timestst_print(&timess_newton_bd);
//    printf("Normalize \n");
//    binom_print(&normalize_bd);
//    timestst_print(&timess_normalize_bd);
//    printf("Consist \n");
//    binom_print(&consist_bd);
//    timestst_print(&timess_consist_bd);
//    printf("Paralel \n");
//    binom_print(&paralel_bd);
//    timestst_print(&timess_paralel_bd);


//    binom_fileout("Newton",   &newton_bd,    &timess_newton_bd,
//                  "Normalize",&normalize_bd, &timess_normalize_bd,
//                  "Consist",  &consist_bd,   &timess_consist_bd,
//                  "Paralel",  &paralel_bd,   &timess_paralel_bd);
}
