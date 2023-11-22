#include <stdio.h>
#include <math.h>


int main(void)
{
  int h, m, s, sT;

  scanf("%d %d %d", &h, &m, &s);

  sT = (h * 3600) + (m * 60) + s;

  printf("O TEMPO EM SEGUNDOS E = %d\n", sT);
}