/******************************************************************************/
/* Да се променат местата на најмалиот и најголемиот елемент во една матрица. */
/*                                                                            */
/* Пример влез:                                                               */
/* 3 3                                                                        */
/* 12 22 15                                                                   */
/* -33 102 99                                                                 */
/* 87 62 -50                                                                  */
/*                                                                            */
/* Пример излез:                                                              */
/* 12 22 15                                                                   */
/* -33 -50 99                                                                 */
/* 87 62 102                                                                  */
/******************************************************************************/

#include <stdio.h>
#define MAX 100

int main()
{
    int i, j, n, max, min, tmp, jMax, jMin, iMax, iMin;
    int array[MAX][MAX];
    printf("How long is the two-dimensional array?\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    max = array[0][0];
    min = array[0][0];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(max > array[i][j])
            {
                max = array[i][j];
                iMax = i;
                jMax = j;

            }
            if(min < array[i][j])
            {
                min = array[i][j];
                iMin = i;
                jMin = j;
            }
        }
    }

    tmp = array[iMin][jMin];
    array[iMin][jMin] = array[iMax][jMax];
    array[iMax][jMax] = tmp;

    printf("\nThe new array is: \n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }



    return 0;
}
