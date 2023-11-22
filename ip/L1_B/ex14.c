#include <stdio.h>

int main(void)
{
   int m, f;
   double sM, s, iN, iL, i;
   double iB = 0;

   scanf("%d %lf %d %lf %lf", &m, &sM, &f, &s, &iN);

 //imposto bruto
      if(s > (12 * sM))
      {
         iB = (s * 0.2);
      }

      else if(s > (5 * sM))
      {
         iB = (s * 0.08);
      }
      else if(s <= (5 * sM))
      {
         iB = 0;
      }


   iN = iN * 0.01;

   iL = ((iB) - (300.0 * f));

   i = iL - (s * iN);


   printf("MATRICULA = %d\n", m);
   printf("IMPOSTO BRUTO = %.2lf\n", iB);
   printf("IMPOSTO LIQUIDO = %.2lf\n", iL);
   printf("RESULTADO = %.2lf\n", i);

      if(i < 0)
         {
            printf("IMPOSTO A RECEBER");
         }
         else if(i > 0)
         {
            printf("IMPOSTO A PAGAR");
         }
         else if( i == 0)
         {
            printf("IMPOSTO QUITADO");
         }

}