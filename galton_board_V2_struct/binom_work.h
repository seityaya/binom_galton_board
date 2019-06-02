#ifndef FILE_OUT_H
#define FILE_OUT_H
void binom_print(BBD *bbd);
void timestst_print(TSS *time);
void bimom_sum(BBD *bbd);
void binom_screenout(char *name1,BBD *bbd1, TSS *tss1,
                     char *name2,BBD *bbd2, TSS *tss2,
                     char *name3,BBD *bbd3, TSS *tss3,
                     char *name4,BBD *bbd4, TSS *tss4);

#endif //FILE_OUT_H
