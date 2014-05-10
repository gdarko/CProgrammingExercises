/******************************************************************************/
/* Да се пресмета збирот на елементите од главната и споредната дијагонала на */
/* една матрица.                                                              */
/*                                                                            */
/* Пример влез:                                                               */
/* 3                                                                          */
/* 15 -10 20                                                                  */
/* -33 48 28                                                                  */
/* -18 60 -50                                                                 */
/*                                                                            */
/* Пример излез:                                                              */
/* 63                                                                         */
/******************************************************************************/

int main()
{
    
    int i, j, n, sporedna = 0,  glavna = 0;
    int a[MAX][MAX];

    printf("Vnesi golemina na matricata: ");
    scanf("%d", &n);

    //citanje
    printf("Vnesuvaj ja matricata\n");
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
        // sobiranje i sporedna i glavna
            if(i==j)
                glavna += a[i][j];
            if(i+j == n-1)
                sporedna += a[i][j];
        }
    }
    
    printf("Zbirot na glavnata e: %d\n", glavna);
    printf("Zbirot na sporednata e: %d\n", sporedna);

    return 0;
}
