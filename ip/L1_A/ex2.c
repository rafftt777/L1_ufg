#include <stdio.h>


int main(void)
{
    double r, h, aO, aC, aT, p;

    scanf("%lf %lf", &r, &h);

    aO = 3.14159 * (r * r);
    aC = 2 * 3.14159 * h;
    aT = (2 * aO) + aC;

    p = 100 * aT;

    printf(": O VALOR DO CUSTO E = %.2lf\n", p);


}