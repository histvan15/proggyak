#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    double r = 0;
    double t = 0;
    double k = 0;

    printf("Kerem a kor sugarat: ");
    scanf("%lf",&r);

    k = 2*r*PI;
    t = r*r*PI;
    printf("Kor terulete: %.2lf\nKor kerulete: %.2lf",t,k);

    return 0;
}
