/******************************************************************************/
/* Дадена е квадратна матрица A   . Да  се пресмета збирот на елементите од,  */
/*                             nxn                                            */
/* над и под главната дијагонала, како и од, над и под споредната дијагонала. */
/*                                                                            */
/* Пример влез:                                                               */
/* 3                                                                          */
/* 10 12 4                                                                    */
/* 6 13 7                                                                     */
/* 8 9 15                                                                     */
/*                                                                            */
/* Пример излез:                                                              */
/* 38                                                                         */
/* 23                                                                         */
/* 23                                                                         */
/*                                                                            */
/* 25                                                                         */
/* 28                                                                         */
/* 31                                                                         */
/******************************************************************************/

#include <stdio.h>

int main()
{
    int zbirNadGlavna = 0, zbirPodGlavna =  0 , zbirGlavna = 0;
    int zbirNadSporedna  = 0, zbirPodSporedna = 0, zbirSporedna = 0;
    int i, j, n;
    int a[10][10];

    printf("Vnesi golemina: ");
    scanf("%d", &n);

    printf("Vnesi ja matricata:\n");
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            if(i==j)
                zbirGlavna += a[i][j];
            else if(i>j)
                zbirPodGlavna += a[i][j];
            else if(i<j)
                zbirNadGlavna += a[i][j];

            if(i+j == n-1)
                zbirSporedna += a[i][j];
            else if(i+j > n-1)
                zbirPodSporedna += a[i][j];
            else if(i+j < n-1)
                zbirNadSporedna += a[i][j];
        }
    }

    printf("Zbir na glavna: %d\n", zbirGlavna);
    printf("Zbir nad glavna: %d\n", zbirNadGlavna);
    printf("Zbir pod glavna: %d\n", zbirPodGlavna);

    printf("Zbir na sporedna: %d\n", zbirSporedna);
    printf("Zbir nad sporedna: %d\n", zbirNadSporedna);
    printf("Zbir pod sporedna: %d\n", zbirPodSporedna);

    return 0;


}

