/******************************************************************************/
/* Да се изброи колку елементи од дадена низа имаат парен број на цифри а     */
/* колку непарен број на цифри.                                               */
/*                                                                            */
/* Пример влез:                                                               */
/* 6                                                                          */
/* 1551 1968 152 128 78 8                                                     */
/*                                                                            */
/* Пример излез:                                                              */
/* 3                                                                          */
/* 3                                                                          */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int count_digits(int n)
{
    if(n<=0)
        return 0;
    return 1+count_digits(n/10);
}

int main()
{
    int evenNum = 0,
        oddNum = 0,
        i, n, a[100];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if((count_digits(a[i]))%2==0)
            evenNum++;
        else
            oddNum++;
    }

    printf("Even digits numbers count: %d\n", evenNum);
    printf("Odd digits numbers count: %d\n", oddNum);

    return 0;
}

