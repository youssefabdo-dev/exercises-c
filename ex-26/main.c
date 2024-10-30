#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , n;
    float S;
    printf("donner n : ");
    scanf("%d",&n);
    S = 0;
    for(i=1;i<=n;i++){
        S = S + (1.0/i);
    }
    printf("S = %f", S);
    return 0;
}
