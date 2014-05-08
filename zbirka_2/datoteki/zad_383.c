/******************************************************************************/
/* Да се најде колку букви, цифри и специјални знаци има во една текстуална   */
/* датотека.                                                                  */
/*                                                                            */
/* Пример влез:                                                               */
/*                                                                            */
/* Пример излез:                                                              */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isletter(char c)
{
    c = tolower(c);
    return ((c >= 'a') && (c <= 'z'));
}
int isspec(char c)
{
    return (((c >= '!') && (c <= '/')) || (c >= ':' && c <= '@') || ((c >= '[') && (c <= '`')) || ((c >= '{') && (c <= 'DEL')));
}

int main()
{
    int i;
    int digits = 0, letters = 0, specialcharacters = 0;
    char c;
    FILE *ptr;

    if((ptr = fopen("D:\\_strukturno\\text.txt", "r")) == NULL)
    {
        printf("Vlez.txt can not be opened!");
        return -1;
    }

    while((c = getc(ptr)) != EOF)
    {
        if(isdigit(c))
            digits++;
        else if(isletter(c))
            letters++;
        else if(isspec(c))
            specialcharacters++;
    }
    printf("Total digits: %d\n", digits);
    printf("Total leters: %d\n", letters);
    printf("Total specials: %d\n", specialcharacters);

    fclose(ptr);
    return 0;
}

