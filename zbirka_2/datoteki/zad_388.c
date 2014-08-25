/******************************************************************************/
/* При отчукување на некој текст, често се прави грешка и место буквата o се  */
/* пишува цифрата 0. Ако текстот е запишан како текстуална датотека, да се    */
/* најдат ваквите грешки и да се исправат.                                    */
/*                                                                            */
/* Пример влез:                                                               */
/*                                                                            */
/* Пример излез:                                                              */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c, corrected = 'o';
    FILE *input, *output;

    if((input=fopen("greski.txt", "r"))==NULL)
    {
        printf("I can't open it!");
        return -1;
    }
    if((output=fopen("greski_out.txt", "w"))==NULL)
    {
        printf("I can't open it!");
        return -1;
    }

    while((c=fgetc(input))!=EOF)
    {
        if(c=='0')
            fputc(corrected, output);
        else
            fputc(c, output);

    }
    return 0;
}

