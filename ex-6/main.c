#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r , v;
    const float Pi = 3.14;

    printf("donner le rayone : ");
    scanf("%f",&r);

    v = (4*Pi*pow(r,3))/3;

    printf("le volume est : %f",v);
    getch();
    return 0;
}
