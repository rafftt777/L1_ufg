#include <stdio.h>
#include <math.h>


int main(void)
{

  int ni, nin;

  scanf("%d", ni);

  for( int j = 0; j < 3; j ++)
  {
    ni *= 10;
    ni = ni + nin % 10;
    nin /= 10;
  }

  printf("%d\n", ni)

}