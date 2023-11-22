#include <stdio.h>


int main(void)
{
    double r, h, aO, aC, aT, p = 0;

    scanf("%lf", &r);
    scanf("%lf", &h);

    aO = 3.14159 * (r * r);
    aC = 2.0 * 3.14159 * r * h;
    aT = (2.0 * aO) + aC;

    p = 100.0 * aT;

    printf(": O VALOR DO CUSTO E = %.2lf\n", p);


}