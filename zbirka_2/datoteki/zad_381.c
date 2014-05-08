/******************************************************************************/
/* Да се најдат сите имиња во текстуалната датотека. (Имиња се зборовите кои  */
/* почнуваат со голема буква.)                                                */
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

int main()
{
    int i, inWord;
    int count = 0, total = 0;
    char row[MAX], zbor[20];
    FILE *ptr;

    if((ptr = fopen("D:\\_strukturno\\text.txt", "r")) == NULL)
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
                if(isupper(zbor[0]) && (strlen(zbor) >= 3))
                {
                    printf("%s ", zbor);
                    total++;
                }
                count = 0;
            }
        }
    }
    printf("\nTotal %d names found\n", total);

    fclose(ptr);
    return 0;
}
