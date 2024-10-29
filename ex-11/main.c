#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rs,rp, r1,r2,r3;
    printf("donner la risistanse : ");
    scanf("%f%f%f",&r1,&r2,&r3);
    rs = r1+r2+r3;
    rp = (r1*r2*r3)/(r1*r2+r1*r3+r2*r3);
    printf("rs = %f ; rp = %f",rs,rp);
    return 0;
}
