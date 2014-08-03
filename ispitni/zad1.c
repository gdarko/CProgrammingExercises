/*
		Da se napise rekurzivna funkcija koja kako argument dobiva cel broj.
		Funkcijata kako rezultat treba da go vrati zbirot od dvete najznacajni
		cifri.
		
		pr: 12345 e 3 (1+2=3)
*/


#include <stdio.h>
#include <stdlib.h>

int count_digits(int n)
{
    if(n<=0)
        return 0;
    return 1+count_digits(n/10);
}

int first_two_digits(int n)
{
    int digit = n%10;

    if(n<=0)
        return 0;
    if(((count_digits(n))==2) || ((count_digits(n))==1))
        return digit+first_two_digits(n/10);
    else
        return first_two_digits(n/10);
}

int main()
{
    int mw = first_two_digits(5678);

    printf("%d", mw );
    return 0;
}
