#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexe;
    int age;
    printf("donner sexe et l'age : ");
    scanf("%c%d",&sexe,&age);
    if ((sexe == 'M' && age >= 20) || (sexe == 'F' && age <=35 && age >18)){
        printf("doit l'imp�t");
    }else {
        printf("n'prtaint pas l'imp�t");
    }
    return 0;
}
