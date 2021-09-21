#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("\nKerek egy egesz szamot: ");

    scanf("%d", &a);

    printf("\n");
    if(a>2==0)
    {
        printf("paros");
    }else{
        printf("paratlan");
    }
    switch(a%2){
        case 0 printf("Paros\n");break;
        case 1 printf("paratlan\n");break;
        default printf("default ag\n");break;
        }

    return 0;
}
