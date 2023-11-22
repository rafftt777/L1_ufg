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

    else if( h >= 3)
    {
      p = ((h / 3) * 10.0) + ((h % 3)* 5);
    }

    printf("O VALOR A PAGAR E = %.2lf\n", p);

}