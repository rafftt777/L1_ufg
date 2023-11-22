#include <stdio.h>

int main(void){

    int q1, q2, i, j, copy;

    scanf("%d %d", &q1, &q2);

    int s = q1 + q2;
    int vet[s];

        for(i = 0; i < s; i++)
            scanf("%d", &vet[i]);

        for(i = 0; i < s; i++)
            for(j = 0; j < s - 1; j++)
                if(vet[j] > vet[j + 1]){
                    copy = vet[j];
                    vet[j] = vet[j + 1];
                    vet[j + 1] = copy;
                }

        for(i = 0; i < s; i++)
            printf("%d\n", vet[i]);
}