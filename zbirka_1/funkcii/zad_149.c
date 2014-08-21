/******************************************************************************/
/*                        1    2          n                                   */
/* Да се пресмета сумата x  + x  + ... + x  .  Вредноста на x и n се внесува  */
/* преку тастатура.                                                           */
/*                                                                            */
/* Пример влез:                                                               */
/* 3                                                                          */
/* 4                                                                          */
/*                                                                            */
/* Пример излез:                                                              */
/* 120                                                                        */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int power(int n, int exp)
{
    if(exp==0)
        return 1;
    return n*power(n, exp-1);
}

int sum_pow(int n, int exp_n)
{
    if(exp_n==0)
        return 0;
    return power(n, exp_n)+sum_pow(n, exp_n-1);
}

int main()
{
    int count = 3;
    int exp = 4;

    printf("%d", sum_pow(3, 4));
    
    return 0;
}
