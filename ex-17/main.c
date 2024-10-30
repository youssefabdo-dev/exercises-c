#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,dt,x,x1,x2;
    printf("donner ax2 +bx +c :\n");
    scanf("%f%f%f",&a,&b,&c);
    dt = pow(b,2)-(4*a*c);
    if(dt<0){
        printf("no solution");
    }else if(dt=0){
        x = -b/(2*c);
        printf("x = %f",x);
    } else {
        x1 = (-b + sqrt(dt))/(2*a);
        x2 = (-b - sqrt(dt))/(2*a);
        printf("x1 = %f ; x2 = %f",x1,x2);
    }
    return 0;
}
