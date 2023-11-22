#include <stdio.h>
#include <math.h>


int main(void)
{

  int R, n100 = 0, n50 = 0, n10 = 0, n1 = 0, T=0, T2 = 0;

  scanf("%d", &R);
  T2=T;

  do {
    T = R / 100;
    n100 = T;
    R = R - (T * 100);
} while (R >= 100);

  do
  {
   T = R / 50;
   n50 = T;
   R = R - (T * 50);
  }while(R >= 50);

  do
  {
  T = R / 10;
   n10 = T;
   R = R - (T * 10);
  }while(R >= 10);

  do
  {
  T =  R / 1;
   n1 = T;
   R = R - T;
  }while(R >= 1);

  printf("NOTAS DE 100 = %d\n", n100);
  printf("NOTAS DE 50 = %d\n", n50);
  printf("NOTAS DE 10 = %d\n", n10);
  printf("MOEDAS DE 1 = %d\n", n1);


}