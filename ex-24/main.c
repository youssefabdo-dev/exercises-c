#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("entrer un nombre :");
    scanf("%d",&n);
    for(i = n+1;i<=n+10;i++){
        printf("%d ;",i);
    }
    return 0;
}
