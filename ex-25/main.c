#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i ;
    printf("entrer nombre : ");
    scanf("%d",&N);
    i = N+1;
    while(i<=N +10){
        printf("%d ;",i);
        i++;
    }
    i = N+1;
    do{
        printf("%d ;",i);
        i++;
    }while(i<=N +10);

    return 0;
}
