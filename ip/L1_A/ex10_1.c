#include <stdio.h>
#include <math.h>


int main(void)
{
  int n, nc, nresto, nF, n1;
  int nplus = 0;
  int nin, ne, ni = 0;
  int i = 0;
  int j = 1;


  scanf("%d", &n);
  ne = n;
  nin = 0;

  do
  {
    nin *= 10;
    nin = nin + ne % 10;
    ne /= 10;
    i++;
  }
  while(i < 3);

  do
  {
    n1 = nin % 10;
    nin /= 10;
    nplus = nplus + (n1 * ((j) + (j-1)));
    j++;
  }
  while(j <= 3);

  nresto = nplus % 7;
  nF = (n*10) + nresto;


  printf("O NOVO NUMERO E = %d\n", nF);
}