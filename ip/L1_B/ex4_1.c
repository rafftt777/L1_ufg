#include <stdio.h>

int main(void)
{
    int h;
    double p = 0;

    scanf("%d", &h);

    if(h < 3)
    {
        p = h * 5.0;
    }
    else if( h == 3)
    {
        p = 10.0;
    }
    else
    {
      p = (((h-2.0) / 3.0) * 10.0) + 10.0;
    }

    printf("O VALOR A PAGAR E = %.2lf\n", p);

}