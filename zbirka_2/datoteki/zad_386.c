/******************************************************************************/
/* Дадени се две текстуални датотеки. Да се споредат дали се исти, при што да */
/* се води сметка дека последователните бланко знаци или табови се сметаат    */
/* како едно бланко, а големите и малите исти букви не се разликуваат.        */
/*                                                                            */
/* Пример влез:                                                               */
/*                                                                            */
/* Пример излез:                                                              */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag = 1, diff = 0;
    char c, c2;
    FILE *dat1, *dat2;

    if((dat1=fopen("dat1.txt", "r"))==NULL)
    {
        printf("I can't open it sorry!");
        return -1;
    }

    if((dat2=fopen("dat2.txt", "r"))==NULL)
    {
        printf("I can't open it sorry!");
        return -1;
    }

    while(((c=fgetc(dat1))!=EOF) && ((c2=fgetc(dat2))!=EOF))
    {
        if(tolower(c) != tolower(c2))
        {
            flag = 0;
            diff++;
        }
    }

    if(flag)
        printf("Both files contain the same content!\n");
    else
        printf("The files are not the same!. Total differences found: %d\n", diff );

    fclose(dat1);
    fclose(dat2);
    return 0;
}
