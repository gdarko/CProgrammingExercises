/******************************************************************************/
/* Да се пронајдат најмалите елементи од секој ред од матрицата A mxn а потоа */
/* од нив да се најде најголемиот елемент.                                    */
/*                                                                            */
/* Пример влез:                                                               */
/* 3 2                                                                        */
/* 5 6                                                                        */
/* 7 1                                                                        */
/* 4 3                                                                        */
/*                                                                            */
/* Пример излез:                                                              */
/* 1                                                                          */
/* 5                                                                          */
/******************************************************************************/

#include <stdio.h>
#define MAX 100

int main()
{
    int i, j, n, m, min, max, count = 0;
    int array[MAX][MAX], getMinElements[MAX];
    printf("Enter rows: \n");
    scanf("%d", &m);
    printf("Enter columns: \n");
    scanf("%d", &n);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        min = array[i][0];
        for(j = 0; j < n; j++)
        {
            if(min > array[i][j])
            {
                min = array[i][j];
                getMinElements[i] =  min;
                count++;
            }
            else if(min < array[i][j])
            {
                getMinElements[i] = min;
                count++;
            }

        }
    }

    max = getMinElements[0];
    min = getMinElements[0];

    for(i = 0; i<count; i++)
    {
        if(max < getMinElements[i])
            max = getMinElements[i];
        if(min > getMinElements[i])
            min = getMinElements[i];
    }

    printf("The minimum is %d\n", min);
    printf("The maximum is %d\n", max);

    return 0;

}
