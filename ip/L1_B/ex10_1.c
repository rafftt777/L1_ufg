#include <stdio.h>

int main(void)
{
   //booble sort
   int i;
   double pont, flag;
   double ordem[3];
   for(i = 0;i<=2;i++)
   {
      scanf("%lf", &ordem[i]);
   }
   flag=1;
   while(flag)
   {
      flag=0;
      for(i=0; i<=1;i++)
      {
         if(ordem[i]>ordem[i+1])
         {
            pont=ordem[i];
            ordem[i]=ordem[i+1];
            ordem[i+1] = pont;
            flag=1;
         }
      }
   }

   for(i=0; i<=2;i++)
   {
      if(i + 1 <= 2)
      {
         printf("%.2lf, ", ordem[i]);
      }
      else if(i + 1 > 2)
      {
         printf("%.2lf", ordem[i]);
      }
   }
}