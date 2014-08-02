/******************************************************************************/
/* Да се пресмета бројот на цифрите и збирот на цифрите од даден број.        */
/*                                                                            */
/* Пример влез:                                                               */
/* 584                                                                        */
/*                                                                            */
/* Пример излез:                                                              */
/* 3                                                                          */
/* 17                                                                         */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int count_digits(int n)
{
    if(n==0)
        return 0;
    return 1+count_digits(n/10);
}

int add_digits(int n)
{
    if(n==0)
        return 0;
    return (n%10)+add_digits(n/10);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("Number of digits: %d\n", count_digits(n));
    printf("Sum the of digits: %d\n", add_digits(n));

    return 0;
}

