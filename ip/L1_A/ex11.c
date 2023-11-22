#include <stdio.h>
#include <math.h>


int main(void)
{

  int ni, ne, nin = 0;


  scanf("%d", &ni);

  ne = ni;

  for( int j = 0; j < 3; j ++)
  {
    nin *= 10;
    nin = nin + ne % 10;
    ne /= 10;


  }

  printf("%d\n", nin);

}