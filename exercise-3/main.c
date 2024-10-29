#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("donner a et b : \n");
    scanf("%f%f", &a,&b);
    c=pow(a,b);
    printf("pourre est : %.2f", c);
    return 0;
}
