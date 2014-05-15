/******************************************************************************/
/* Квадратна матрица со ист број редици и колони се нарекува симетрична ако   */
/* A   = A  , за секое i ≠ j. Да се провери дали матрицата A    е симетрична. */
/*  ij    ji                                                nxn               */
/*                                                                            */
/* Пример влез:                                                               */
/* 4                                                                          */
/* 1 5 8 6                                                                    */
/* 5 3 0 4                                                                    */
/* 8 0 7 10                                                                   */
/* 6 4 10 9                                                                   */
/*                                                                            */
/* Пример излез:                                                              */
/* Simetrichna                                                                */
/******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, flag = 1, n;
    int a[10][10];
    printf("Vnesi koloni i redici: ");
    scanf("%d", &n);

    printf("Vnesuvaj ja matricata...\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j] != a[j][i])
                flag = 0;
        }
    }

    if(flag) 
        printf("Simetricna");
    else 
        printf("Ne e simetricna");

    return 0;
}

