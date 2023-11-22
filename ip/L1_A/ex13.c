#include <stdio.h>

int main(void)
{
  double x, y, a, b, c, d, e, f;

  scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

  y = ((a*f) - (d*c)) / ((a*e) - (d*b));

  x = (c - (b*y)) / a;

  printf("O VALOR DE X E = %.2lf\n", x);
  printf("O VALOR DE Y E = %.2lf\n", y);
}