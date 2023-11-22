#include <stdio.h>


int main(void)
{
  double a, b, c, D;

  scanf("%lf %lf %lf", &a, &b, &c);

    D = (b*b) - (4 * a * c);

    printf("O VALOR DE DELTA E = %.2lf\n", D);
}