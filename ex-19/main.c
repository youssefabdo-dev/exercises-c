#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PHT, TTC;
    char c;
    printf("donner catigore et PHT : \n");
    scanf("%c",&c);
    scanf("%f",&PHT);
    if(c=='A'){
        TTC = PHT + PHT * 0.7;
    }else if(c=='B'){
        TTC = PHT + PHT * 0.2;
    }else{
        TTC = PHT + PHT * 0.25;
    }
    printf("TTC = %f",TTC);
    return 0;
}
