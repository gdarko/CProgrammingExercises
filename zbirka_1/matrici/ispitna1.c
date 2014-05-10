/*
    Da se napise programa koja ke procita kvadratna matrica so maksimalni dimenzii
    100x100 i ke proveri dali matricata e magicen kvadrat. Magicen kvadrat e matricata
    cii sto sumi na elementite po koloni i redici imaat ista vrednost.

    Primer: 8   1   6
            3   5   7
            4   9   2

    Vo matricata od primerot sumata na elementite po site koloni i site redici e 15.
    Dopolnitelno programata treba da proveri dali  matricata e specijalen magicen
    kvadrat odnosno sumata od elementite od glavnata i sporednata e ednakov na
    sumata od elementite po koloni i redici.

*/


#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int i, j, n, zbirZaSporeduvanje = 0, sporedna = 0,  glavna = 0, flag = 0;
    int a[MAX][MAX], temp[MAX], temp2[MAX];

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


    // zbiranje na site redovi temp[] i site koloni vo temp2[]
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            temp[i] += a[i][j];
            temp2[i] += a[j][i];
        // sobiranje i sporedna i glavna
            if(i==j)
                glavna += a[i][j];
            if(i+j == n-1)
                sporedna += a[i][j];
        }
    }

    //sporeduvanje
   for(i=0; i<n; i++)
    {
        if(temp[i] != temp2[i])
        {
            printf("Maricata ne e magicen kvadrat!");
            return -1;
        }
        if((temp[i] == glavna) && (temp[i] == sporedna))
            flag = 1;

    }
    // ako ne padne do sega togas e magicna!
    printf("\nMatricata e magicen kvadrat!\n");
    if(flag)
        printf("BINGO...Matricata e i specijalen magicen kvadrat\n");

    return 0;
}
