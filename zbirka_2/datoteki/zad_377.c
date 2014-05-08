/******************************************************************************/
/* Да се најдат, да се испечатат и да се избројат дозволените зборови во      */
/* текстуална датотека. (Под дозволени зборови ќе ги подразбираме оние кои се */
/* состојат од малите и од големите букви во абецедата).                      */
/*                                                                            */
/* Пример влез:                                                               */
/*                                                                            */
/* Пример излез:                                                              */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int isAllowedWord(char *zbor)
{
    int i;
    for(i = 0; i<strlen(zbor); i++)
    {
        zbor[i] = tolower(zbor[i]);
        if(!(zbor[i] >= 'a' && zbor[i] <= 'z'))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i, inWord;
    int count = 0, totalallowed = 0, totalwords = 0;
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
                if(isAllowedWord(zbor))
                {
                    printf("%s ", zbor);
                    totalallowed++;
                }
                totalwords++;
                count = 0;
            }

        }

    }

    printf("Total allowed words: %d\n", totalallowed);
    printf("Total words: %d\n", totalwords);
    
    fclose(ptr);
    return 0;
}
