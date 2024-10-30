#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,m ;
    printf("donner 3 note : \n");
    scanf("%f%f%f",&n1,&n2,&n3);
    m = (n1+n2+n3)/3;
    printf("%f ",m);
    if(m>=16){
        printf("tres bien");
    }else if(m<16 && m>=14){
        printf("bien");
    }else if(m<14 && m>12){
        printf("assez bien");
    }else if(m<12 && m>=10){
        printf("passable");
    } else {
        printf("insuffisant");
    }
    return 0;
}
