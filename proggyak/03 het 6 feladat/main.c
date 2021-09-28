#include <stdio.h>

int main()
 {
    int a, b, i;

    long int eredmeny = 1;

    printf("\nKerem a hatvany alapot es a kitevot vesszovel elvalasztva: ");
    scanf("%d, %d", &a, &b);
    char c;
    int ok;
    do {
    ok = 1;
    printf("\nKerem a hatvany alapot és a kitevot vesszõvel elválasztva: ");
    if (scanf("%d,%d", &a, &b) != 2)
    {
    printf("Hibas adatok!\n");

    while ( (c = getchar()) != ‘\n’);

    ok = 0;

    }
    }
    while (!ok);

    printf("\n%d %d. hatvanya: %ld\n", a, b, eredmeny);

    return 0;
 }
