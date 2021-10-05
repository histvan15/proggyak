#include <stdio.h>
#include <stdlib.h>

int main()
{
    int meret = 10;
    int tomb[meret];

    for(int i=0;i<meret;i++)
    {
        tomb[i]=i*2;
    }
    for(int b=0;b<10;b++)
    {
        printf("%d. szam: %d\n",b+1,tomb[b]);
    }
    return 0;
}
