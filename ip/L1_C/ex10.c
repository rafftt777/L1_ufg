#include <stdio.h>

int main(void)
{
    double n, i, s;
    int k, j;


    scanf("%lf %lf %d %lf", &n, &i, &k, &s);

    printf("Tabuada de soma:\n" );
    for(j = 0; j < k; j++)
    {
        printf("%.2lf + %.2lf = %.2lf\n", n, i + (j * s), n + (i + (j * s)));
    }

     printf("Tabuada de subtracao:\n" );
    for(j = 0; j < k; j++)
    {
        printf("%.2lf - %.2lf = %.2lf\n", n, i + (j * s), n - (i + (j * s)));
    }

     printf("Tabuada de multiplicacao:\n" );
    for(j = 0; j < k; j++)
    {
        printf("%.2lf x %.2lf = %.2lf\n", n, i + (j * s), n * (i + (j * s)));
    }

     printf("Tabuada de divisao:\n" );
    for(j = 0; j < k; j++)
    {
        printf("%.2lf / %.2lf = %.2lf\n", n, i + (j * s), n / (i + (j * s)));
    }
}