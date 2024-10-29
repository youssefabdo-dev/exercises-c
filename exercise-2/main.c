#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lo, la ,s, p;
    printf("donner longeur et largeur ?");
    scanf("%f%f",&lo,&la);
    s = lo * la;
    p = (lo + la)*2;
    printf("la surface %.2f la primetre %.2f", s,p);
    return 0;
}
