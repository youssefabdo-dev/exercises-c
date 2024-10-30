#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("donner l' age : ");
    scanf("%d",&age);
    if(age<=7 && age>=6){
        printf("Poussin");
    } else if(age<=9 && age>= 8){
        printf("Pupille");
    } else if(age>=10 && age<=11){
        printf("Minime");
    }else if(age>=12) {
        printf("Cadet");
    } else {
        printf("Unconnu");
    }
    return 0;
}
