#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int xa ,ya ,xb,yb;
    float d;
    printf("entrer xa , yb et xb yb : \n");
    scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
    d = sqrt(pow((xa - xb),2)+pow((ya - yb),2));
    printf("ladicetense est : %.3f", d);
    getch();
    return 0;
}
