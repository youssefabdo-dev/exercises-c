#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t ,r, h ,m ,s;
    printf("donner temps en second :");
    scanf("%d", &t);
    h = t / 3600;
    r = t % 3600;
    m = r / 60;
    s = r % 60;
    printf("temps est %dh %dm %ds", h,m,s);
    return 0;
}
