#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ok,upper,lower;
    char ch;
    do {
    ok = 1;
    printf("Add meg az intervallum felso hatarat: ");
    if (scanf("%d", &upper)!=1 || upper<lower || upper > 2019) {
    printf("Hibas input\n");
    ok = 0;
    while ((ch=getchar())!='\n') ;
    }
    } while (!ok);

    do {
    ok = 1;
    printf("Add meg az intervallum alsó hatarat: ");

    if (scanf("%d", &lower)!=1 || lower<1000) {

    printf("Hibas input\n");

    ok = 0;

    while ((ch=getchar())!='\n') ;

    }

    } while (!ok);

    return 0;
}
