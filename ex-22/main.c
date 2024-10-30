#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("donner un nombre : ");
    scanf("%d",&n);
    if(n%2==0)
        {
            printf("pair");
    }
    else{
            printf("impair");
    }
    return 0;
}
