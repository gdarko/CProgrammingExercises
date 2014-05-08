/******************************************************************************/
/* Да се избројат зборовите во веќе постоечка датотека.                       */
/*                                                                            */
/* Пример влез:                                                               */
/* Ova e proben tekst                                                         */
/*                                                                            */
/* Пример излез:                                                              */
/* 4                                                                          */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main()
{
    int i, inWord;
    int count = 0, totalwords = 0;
    char row[MAX], zbor[20];
    FILE *ptr;

    if((ptr = fopen("D:\\_strukturno\\vlez.txt", "r")) == NULL)
    {
        printf("Vlez.txt can not be opened!");
        return -1;
    }

    while(fgets(row, MAX, ptr) != NULL)
    {
        inWord = count = 0;
        for(i = 0; i < strlen(row); i++)
        {
            if(isalnum(row[i]))
            {
                if(!inWord)
                {
                    inWord = 1;
                }
                zbor[count++] = row[i];
            }
            else if(inWord)
            {
                inWord = 0;
                zbor[count] = '\0';
                totalwords++;
                count = 0;
            }

        }

    }
    printf("Total words: %d\n", totalwords);

    fclose(ptr);
    return 0;
}
