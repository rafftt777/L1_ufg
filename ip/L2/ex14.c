#include <stdio.h>

int main(void){

    int v, i, j, copia, m;
    double moda;

    scanf("%d", &v);
    double vet[v];

    for(i = 0; i < v; i++)
        scanf("%lf", &vet[i]);

    for(i = 1; i <= v; i++){
        for(j = 0; j < v - 1; j++){
            if(vet[j] > vet[j + 1]){
            copia = vet[j];
            vet[j] = vet[j + 1];
            vet[j + 1] = copia;
          }
        }
    }

    if(v % 2 != 0){
        m = v / 2;
        moda = vet[m];
    }

    else{
        m = v / 2;
        moda = (vet[m] + vet[m - 1]) / 2;
    }

printf("%.2lf\n", moda);



}