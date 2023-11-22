#include <stdio.h>

int main(void)
{
  int n, i;
  double r = 0;

  scanf("%d", &n);
    if(n <= 0)
    {
        printf("Numero invalido!");
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        r = r + (1.0 / i);
    }

    printf("%.6lf", r);
}