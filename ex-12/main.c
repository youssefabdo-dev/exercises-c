#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("donner deux nombre :\n");
    scanf("%d%d",&a,&b);
    if(a*b>0){
        printf("la meme singe");
    }else {
        printf("deffernt singe");
    }
    return 0;
}
