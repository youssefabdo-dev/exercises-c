#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,a,b;
    printf("entrer a et b :\n");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("num1 = %d ; num2 = %d",a,b);

    return 0;
}
