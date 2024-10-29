#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("entrer a et b :\n");
    scanf("%d%d",&a,&b);
    a = a +b;
    b = a -b;
    a = a -b;
    printf("num1 = %d ; num2 = %d",a,b);

    return 0;
}
