#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, sum=0,n2,sum2=0;

    printf("\nKerek egy szamot: ");

    scanf("%d", &n);

    i=1;

    while (i<=n)
    {
        sum += i;
        i++;
    }
    do{
        sum2 += n2;
        n2--;
    } while (n2>0);

    printf("\nOsszeg: %d %d\n", sum,sum2);

    return 0;
 }
