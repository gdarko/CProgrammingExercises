/*

    Se vnesuvaat dve matrici so razlicni dimenzii. Treba da se sporedat dvete matrici spored zbirot od:
    ZbirOdMatricataA = Prviot red + Posledniot red + Prvata kolona + Poslednata Kolona
    ZbirOdMatricataB = Prviot red + Posledniot red + Prvata kolona + Poslednata Kolona
    Ako zbirot od matricata A e pogolem se pecati matricata A, vo sprotivno B

*/


#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int i, j, n, m, m1, n1, a[MAX][MAX], b[MAX][MAX];

    int zbirA = 0, zbirB = 0;

    printf("Vnesi gi dimenziite na prvata matrica: \n");
    scanf("%d%d", &m, &n);

    printf("Vnesuvaj ja prvata matrica: \n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0)
            {
                zbirA += a[i][j];
            }
            if(i==m-1)
            {
                zbirA += a[i][j];
            }
            if(j==0)
            {
                zbirA += a[j][i];
            }
            if(j==n-1)
            {
                zbirA += a[j][i];
            }
        }
    }

    printf("Vnesi gi dimenziite na vtorata matrica: \n");
    scanf("%d%d", &m1, &n1);

    printf("Vnesuvaj ja vtorata matrica: \n");
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        {
            if(i==0)
            {
                zbirB += b[i][j];
            }
            if(i==m-1)
            {
                zbirB += b[i][j];
            }
            if(j==0)
            {
                zbirB += b[j][i];
            }
            if(j==n-1)
            {
                zbirB += b[j][i];
            }
        }
    }

    if(zbirA>zbirB)
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", a[i][j]);
            }
             printf("\n");
        }
    }
    else
    {
        for(i=0; i<m1; i++)
        {
            for(j=0; j<n1; j++)
            {
                printf("%d ", b[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
