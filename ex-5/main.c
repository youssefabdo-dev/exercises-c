#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5,s,m;
    printf("donner 5 notes :\n");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    s = n1+n2+n3+n4+n5;
    m = s/5;
    printf("s = %f ; m = %f",s,m);
    getch();
    return 0;
}
