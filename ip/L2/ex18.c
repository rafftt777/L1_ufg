#include <stdio.h>
#include <stdbool.h>


bool verify(void){
    int cpf[11];
    int i, r = 0, b1 = 0, b2 = 0, flag = 1;

    for(i = 0; i < 11; i++)
        scanf("%d", &cpf[i]);

    int *pb1 = &cpf[9];
    int *pb2 = &cpf[10];
    //part 1

    for(i = 0; i < 9; i++){
        b1 += cpf[i] * (flag);
        flag++;
    }

        b1 = (b1 % 11 == 10) ? 0 : b1 % 11;

    //part 2
    i = 0;

    flag = 10;
    while(flag--){
         b2 += cpf[i] * (flag);
         i++;
    }
        b2 = (b2 % 11 == 10) ? 0 : b2 % 11;

        if(b1 == *pb1 && b2 == *pb2)
            return true;

        return false;
}

int main(void){

    int t;

    scanf("%d", &t);

    do{
        if (verify())
            printf("CPF valido\n");
        else
            printf("CPF invalido\n");
    t--;
    }while(t > 0);


    return 0;
}