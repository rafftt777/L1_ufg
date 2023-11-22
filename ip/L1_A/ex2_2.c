#include <stdio.h>


int main(void)
{
    double f, c, mm, p;

    scanf("%lf %lf", &f, &mm);

    c = (5.0*(f -32)/9.0);

    p = mm * 25.4;


    printf("O VALOR EM CELSIUS = %.2lf\n", c);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", p);

}