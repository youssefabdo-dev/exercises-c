#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anne;
    printf("donner un anne : ");
    scanf("%d",&anne);
    if( (anne%400==0) ||(anne%4==0 && anne%100!=0 )){
        printf("bissex");
    }else {
        printf("no bissex");
    }
    return 0;
}
