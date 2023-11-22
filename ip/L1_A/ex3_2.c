#include <stdio.h>
#include <math.h>


int main(void)
{
  double v, Ab, a, h;
  scanf("%lf %lf", &h, &a);

  Ab = (3.0 * pow(a, 2) * sqrt(3.0)) / 2.0;

  v = (1.0/3.0) * Ab * h;

  printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", v);
}