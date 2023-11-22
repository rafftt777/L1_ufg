#include <stdio.h>

int main(void)
{
    double s;

    scanf("%lf", &s);

    if(s <= 300)
    {
        s = s * 1.5;
    }
    else
    {
        s = s * 1.3;
    }
    printf("SALARIO COM REAJUSTE = %.2lf\n", s);
}