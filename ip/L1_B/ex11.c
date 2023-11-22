#include <stdio.h>
#include <math.h>

int main(void)
{
  double a, b, c, D, x1, x2;

  scanf("%lf %lf %lf", &a, &b, &c);

//delta
    D = pow(b, 2) - (4 * a * c);


      if(D > 0)
      {
        printf("RAIZES DISTINTAS\n");
      }

      else if(D == 0)
      {
        printf("RAIZ UNICA\n");
      }

      else if(D < 0)
      {
        printf("RAIZES IMAGINARIAS\n");
      }

//raizes
    x1 = (-b - sqrt(D)) / (2 * a);
    x2 = (-b + sqrt(D)) / (2 * a);
//printar
    if(D > 0)
    {
      if(x1 > x2)
      {
        printf("X1 = %.2lf\n", x2);
        printf("X2 = %.2lf\n", x1);
      }
      else if(x1 < x2)
      {
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
      }

    }
    else if(D == 0)
    {
      printf("X1 = %.2lf", x1);
    }
}