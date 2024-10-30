#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float f;
    printf("donner num de fotocope : ");
    scanf("%d",&n);
    if(n <= 10){
        f= n*0.3;
    }else if(n<=30){
        f = (10*0.3) + ((n-10)*0.25);
    }else {
        f = (10*0.3)+(20*0.25)+((n-30)*0.2);
    }
    printf("la factor est : %f",f);
    return 0;
}
