#include <stdio.h>
#include <stdlib.h>

int main()
{

    int szam, oszto, db=0;

    printf("\nKerek egy szamot: ");

    scanf("%d", &szam);

    oszto=1;

    while (oszto<=szam) {

        if (szam%oszto == 0)

        db++;

      oszto++;
    }
    int i,db2 = 0;
    for (i=1; i<=szam; i++)
    {
        if (szam%i == 0)
        db2++;
    }

    printf("\nOsztok szama: %d %d\n", db,db2);

    return 0;
 }
