#include <stdio.h>

int main(void){

    int i, j, v, flag;

    scanf("%d", &v);
    int vet[v];

    for(i = 0; i < v; i++)
        scanf("%d", &vet[i]);

    for(i = 0; i < v; i++)
        for(j = 0; j < v - 1; j++)
            if(vet[j] > vet[j + 1]){
                flag = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = flag;
            }

    for(i = 0; i < v; i++)
        if(vet[i] != vet[i - 1])
            printf("%d\n", vet[i]);

    return 0;



}