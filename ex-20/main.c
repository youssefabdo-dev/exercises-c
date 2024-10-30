#include <stdio.h>
#include <stdlib.h>

int main()
{
    char o;
    int a,b;
    float r = 0;
    printf("donner operator et deux num : ");
    scanf("%c%d%d",&o,&a,&b);
    switch(o){
    case '+': r = a + b;
        printf("a + b = %f", r);
        break;
    case '-': r = a - b;
        printf("a - b = %f", r);
        break;
    case '*': r = a * b;
    printf("a * b = %f", r);
        break;
    case '/': r = a / b;
    printf("a / b = %f", r);
        break;
    default : printf("oprator est no valide");
    };
    return 0;
}
