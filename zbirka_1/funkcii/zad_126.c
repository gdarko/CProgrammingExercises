/******************************************************************************/
/* Да се избројат елементите во низата кои имаат парен број на цифри. Низата  */
/* се внесува преку тастатура.                                                */
/*                                                                            */
/* Пример влез:                                                               */
/* 6                                                                          */
/* 102 458 44 6890 12 5                                                       */
/*                                                                            */
/* Пример излез:                                                              */
/* 3                                                                          */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int brojnaCifrivoBroj(int n, int c)
{
    int cifra = n%10;
    if(n==0)
    {
        return c;
    }
    else
    {
        return brojnaCifrivoBroj(n/10, c+1);
    }
}


void parenBrojCifri(int a[], int n, int brojac)
{
    if(n==0){
        printf("\n%d\n", brojac);
        return;
    }
    else
    {
        if(brojnaCifrivoBroj(a[n], 0)%2==0)
        {
            printf("%d ", a[n]);
            parenBrojCifri(a, n-1, brojac+1);
        }
        else
            parenBrojCifri(a, n-1, brojac);
    }

}




int main()
{

    int n, i, a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    parenBrojCifri(a, n-1, 0);

    return 0;
}
