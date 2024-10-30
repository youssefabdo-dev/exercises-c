#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c ;
    printf("donner deux nombre :");
    scanf("%f%f",&a,&b);
    if(a*b>0){
        c = a;
        a = b;
        b = c;
    }else {
        c = a;
        a = a+b;
        b = c*b;
    }
    printf("a = %f ; b = %f",a,b);
    return 0;
}
