#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,a;
    const int ane = 2024;
    printf("donner la date de nessante : ");
    scanf("%d", &d);
    a = ane - d;
    printf("l age est : %d",a);
    return 0;
}
