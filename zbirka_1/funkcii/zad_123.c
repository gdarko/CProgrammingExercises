/******************************************************************************/
/*                        1    2    3          n                              */
/* Да се пресмета сумата 1  + 2  + 3  + ... + n , каде што n се внесува преку */
/* тастатура.                                                                 */
/*                                                                            */
/* Пример влез:                                                               */
/* 5                                                                          */
/*                                                                            */
/* Пример излез:                                                              */
/* 3413                                                                       */
/******************************************************************************/

#include <stdio.h>
#include <math.h>

int powersum(int n)
{
    if(n==0)
        return 0;
    else
        return pow(n,n)+powersum(n-1);
}

int main()
{
    int n, ps;
    scanf("%d", &n);
    ps = powersum(n);
    printf("%d", ps);
    return 0;
}

