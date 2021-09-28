#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("\nKerek egy egesz szamot: ");

    scanf("%d", &a);

    printf( (a % 2 == 0) ? " paros" : " paratlan" );

    return 0;
}
