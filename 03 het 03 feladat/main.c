#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;

    printf("\nAdjon meg egy szamot: ");

    scanf("%d",&a);

    if(a<0)
    {
        a=a*(-1);
    }

    printf("Szam abszoluterteke: %d",a);

    return 0;
}
