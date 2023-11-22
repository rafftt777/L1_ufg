#include <stdio.h>

int main(void)
{

  int ni, ne, nin = 0;
  int i = 0;
  scanf("%d", &ni);
  ne = ni;
  do
  {

    nin *= 10;
    nin = nin + ne % 10;
    ne /= 10;
    i++;

  }
  while(i < 3)

  printf("%d\n", nin);

}