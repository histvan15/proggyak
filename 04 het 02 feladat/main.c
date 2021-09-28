#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year = 0;

    printf("kerem az evszamot: \n");
    scanf("%d",&year);

    if ( ((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0) )
    printf("Szokoev \n");
    else
    printf("Nem szokoev \n");

    return 0;
}
