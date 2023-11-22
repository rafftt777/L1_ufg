#include <stdio.h>
#include <math.h>


int main(void){
    int v, i;
    double d;

    scanf("%d", &v);
    double vetx[v];
    double vety[v];
    double vetz[v];

    for(i = 0; i < v; i++)
        scanf("%lf %lf %lf", &vetx[i], &vety[i], &vetz[i]);

    for(i = 0; i < v -1; i++){
        d = (pow(vetx[i] - vetx[i + 1], 2)) + (pow(vety[i] - vety[i + 1], 2)) + (pow(vetz[i] - vetz[i + 1], 2));
        d = sqrt(d);
        printf("%.2lf\n", d);
    }
}