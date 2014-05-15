/******************************************************************************/
/* Да се пронајде елементот со најголема вредност како и неговата позиција    */
/* во матрицата A   .                                                         */
/*               mxn                                                          */
/*                                                                            */
/* Пример влез:                                                               */
/* 4 3                                                                        */
/* 1 2 8                                                                      */
/* -5 6 7                                                                     */
/* 4 -3 12                                                                    */
/* 10 7 9                                                                     */
/*                                                                            */
/* Пример излез:                                                              */
/* 3 3                                                                        */
/* 12                                                                         */
/******************************************************************************/

#include <stdio.h>

int main()
{
    int maksi, maksj, i, j, maksEl, m, n;
    int a[10][10];

    printf("How much rows the 2d array will have: ");
    scanf("%d", &m);
    printf("How much columns the 2d array will have: ");
    scanf("%d", &n);

    printf("Enter the array:\n");
    for(i = 0; i<m; i++)
    {
        for(j = 0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    maksEl = a[0][0];
    for(i = 0; i<m; ++i)
    {
        for(j = 0; j<n; ++j)
        {
            if(a[i][j] > maksEl)
            {
                maksEl = a[i][j];
                maksi = i;
                maksj = j;
            }
        }
    }

    printf("%d %d\n", maksi+1, maksj+1);
    printf("%d", maksEl);



    return 0;
}
