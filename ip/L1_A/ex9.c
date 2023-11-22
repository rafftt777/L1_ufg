#include <stdio.h>
#include <math.h>


int main(void)
{
  double m, a, t, Vms, Vkm, S, W, mkg;

  scanf("%lf %lf %lf", &m, &a, &t);

  Vms = (a*t);
  Vkm = Vms * 3.6;
  S = ((a*(t*t)) / 2.0);
  mkg = m * 1000;
  W = ((mkg * (Vms*Vms)) / 2.0);

  printf("VELOCIDADE = %.2lf\n", Vkm);
  printf("ESPACO PERCORRIDO = %.2lf\n", S);
  printf("TRABALHO REALIZADO = %.2lf\n", W);
}