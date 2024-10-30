#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("doner nombre 2 ou 4 ou 6 ou 8 :");
    scanf("%d", &n);
    switch(n){
    case 2: printf("haut");
    break;
    case 4 : printf("gôuche");
    break;
    case 6: printf("droit");
    break;
    case 8 : printf("bas");
    break;
    default : printf("error");
    }
    return 0;
}
