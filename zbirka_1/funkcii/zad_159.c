/******************************************************************************/
/*                        k    k    k          k                              */
/* Да се пресмета сумата 1  + 2  + 3  + ... + n  каде што n и k се внесуваат  */
/* од тастатура.                                                              */
/*                                                                            */
/* Пример влез:                                                               */
/* 5                                                                          */
/* 3                                                                          */
/*                                                                            */
/* Пример излез:                                                              */
/* 225                                                                        */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int power(int n, int exp)
{
    if(exp==0)
        return 1;
    return n * power(n, exp-1);
}

int recursive_sum(int n, int exp)
{
    if(n==0)
        return 0;
    return ((power(n, exp))+recursive_sum(n-1, exp));
}

int main()
{
    int num = 5;
    int exponent = 3;

    printf("%d", recursive_sum(num, exponent));

    return 0;
}

