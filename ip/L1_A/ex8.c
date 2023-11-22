#include <stdio.h>
#include <math.h>


int main(void)
{
  double c, pd, i, cf;
  scanf("%lf %lf %lf", &cf, &pd, &i);

  c = cf + (cf *(pd/100) + (cf * (i/100.0)));

  printf("O VALOR DO CARRO E = %.2lf\n", c);
}