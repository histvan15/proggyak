#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, db=0;

    double tomb[ ] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
    int meret = sizeof(tomb)/sizeof(double);
    double limit=300.0;

    printf("HUF/EUR arfolyamok:\n");

    for (i=0; i<meret; i+=1)
    {
    printf("%d.ertek: %.1lf  ", i+1, tomb[i]);

    if (tomb[i] < limit)
        db++;
    }
    printf("\nAz arfolyam erteke %d-szer volt %.2f alatt.", db, limit);

    for (i=0; i<meret; i++)
    {
        printf("%.1lf ",tomb[i]);
    }

    // B feladat
    int found=0;

    for (i=1; i<meret && !found; i+=1)
    {
        if (tomb[i] < tomb[i-1]) found=1;
    }
    printf("\n\nA sorozat monoton novo: %s", !found ? "igaz" : "hamis");

    // C feladat
    int minindex=0;
    for(i=0; i<meret; i++)
    {
        if(tomb[i]<tomb[minindex])
        minindex=i;
    }
    printf("\nA sorozat legkisebb eleme: %lf, sorszama: %d", tomb[minindex], minindex+1);

    int maxindex=0;
    for(i=0; i<meret; i++)
    {
        if(tomb[i]>tomb[maxindex])
        maxindex=i;
    }
    printf("\nA sorozat legnagyobb eleme: %lf, sorszama: %d", tomb[maxindex],
    maxindex+1);

    //D feladat
    int osszeg=0;
    for(i=0;i<meret;i++)
    {
        osszeg+=tomb[i];
    }
    double atlag=osszeg/meret;
    printf("\nAtlag: %.1lf",atlag);
    for(i=0;i<meret;i++)
    {
        tomb[i]-=atlag;
        printf("\n %d.szoras: %.1lf",i+1,tomb[i]);
    }
    return 0;
}
