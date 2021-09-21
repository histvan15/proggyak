#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=0;
    double b=0;

    printf("Kerem az A es B erteket: \n");
    scanf("%lf %lf",&a,&b);

    printf("osszeg: %.0lf \n",a+b);
    printf("kulonbseg: %.0lf \n",a-b);
    printf("szorzas: %.0lf \n",a*b);
    printf("osztás: %.2lf \n",a/b);

    return 0;
}
