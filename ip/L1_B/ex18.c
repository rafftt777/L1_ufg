#include <stdio.h>

int main(void)
{
   double a, b, c, p, A, f;

   scanf("%lf %lf %lf", &a, &b, &c);

   if(a > (b - c) && a < (b + c))
   {
      if(b > (a -c) && b < (a + c))
      {
         if(c > (a - b) && c < (a + b))
         {
      p = a + b + c;
      printf("Perimetro = %.1lf\n", p);
      return 0;
         }
         else
         {}
      }
      else
      {}
   }

   else
   {
      A = ((a+b) * c) / 2;
      printf("Area = %.1lf\n", A);
   }


}