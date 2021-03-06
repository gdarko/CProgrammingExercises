/******************************************************************************/
/* Eлементите на матрицата A    огледално да се пресликаат во однос на        */
/*                          nxn                                               */
/* хоризонталата.                                                             */
/*                                                                            */
/* Пример влез:                                                               */
/* 3                                                                          */
/* 5 6 3                                                                      */
/* 3 1 0                                                                      */
/* 7 9 10                                                                     */
/*                                                                            */
/* Пример излез:                                                              */
/* 7 9 10                                                                     */
/* 3 1 0                                                                      */
/* 5 6 3                                                                      */
/******************************************************************************/

int main()
{
    int i, j, tmp, n;
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

    for(i=0; i<n/2; i++)
    {
        for(j=0; j<n; j++)
        {
            tmp = a[i][j];
            a[i][j] = a[n-1-i][j];
            a[n-1-i][j] = tmp;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }



    return 0;
}
