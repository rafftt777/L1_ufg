#include <stdio.h>

int count(int v, int vetor[v]){
    int i, j, flag, r = 0, pass;

    for(i = 0; i < v; i++)
        scanf("%d", &vetor[i]);

    for(i = 0; i < v; i++){
        for(j = 0; j < v - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                flag = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = flag;
            }
        }
    }

    for(i = 0; i < v; i++){
        pass = 0;
        for(j = 0; j < v; j++){
            if(vetor[i] == vetor[j])
                pass++;
        }
        if(pass == 1)
            r++;
    }
    return r;
}

int main(void){
    int v, r;

    scanf("%d", &v);
    int vetor[v];

    r = count(v, vetor);

    printf("%d\n", r);


}