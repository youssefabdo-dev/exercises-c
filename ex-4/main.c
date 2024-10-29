#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a ,b , s ,p, d, dif;
    printf("donner deux number :\n");
    scanf("%f%f",&a,&b);
    s= a+b;
    p = a*b;
    dif = a - b;
    d = a / b;
    printf("s = %f ; dif = %f ; p = %f ; div = %f ",s,dif,p,d);
    return 0;
}
