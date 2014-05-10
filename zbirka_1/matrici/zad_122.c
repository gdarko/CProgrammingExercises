/******************************************************************************/
/* Да се најде транспонираната матрица на матрицата A    .(Транспонирана      */
/*                                                   mxn                      */
/* матрица се добива кога кај матрицата редовите ќе си ги променат местата со */
/* колоните).                                                                 */
/*                                                                            */
/* Пример влез:                                                               */
/* 4 3                                                                        */
/* -5 4 2                                                                     */
/* 0 1 6                                                                      */
/* -7 -8 -3                                                                   */
/* 10 8 9                                                                     */
/*                                                                            */
/* Пример излез:                                                              */
/* -5 0 -7 10                                                                 */
/* 4 1 8 8                                                                    */
/* 2 6 -3 9                                                                   */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int i, j, n, m;
    int array[MAX][MAX], newarray[MAX][MAX];
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
// transpose it

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            newarray[j][i] = array[i][j];
        }
    }

//printing

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", newarray[i][j]);
        }
        printf("\n");
    }

    return 0;
}

