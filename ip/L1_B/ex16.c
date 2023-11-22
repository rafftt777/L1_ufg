#include <stdio.h>

int main(void)
{
   //booble sort
   char xA, xB, xC;
   int s;
   int i;
   double pont, flag;
   double ordem[3];

   for(i = 0;i <= 2;i++)
   {
      scanf(" %lf", &ordem[i]);
      getchar();
   }

   scanf("%c%c%c", &xA, &xB, &xC);


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


     if (xA == 'A' && xB == 'B' && xC == 'C') {
        printf("%.0lf %.0lf %.0lf", ordem[0], ordem[1], ordem[2]);
    } else if (xA == 'A' && xB == 'C' && xC == 'B') {
        printf("%.0lf %.0lf %.0lf", ordem[0], ordem[2], ordem[1]);
    } else if (xA == 'B' && xB == 'A' && xC == 'C') {
        printf("%.0lf %.0lf %.0lf", ordem[1], ordem[0], ordem[2]);
    } else if (xA == 'B' && xB == 'C' && xC == 'A') {
        printf("%.0lf %.0lf %.0lf", ordem[1], ordem[2], ordem[0]);
    } else if (xA == 'C' && xB == 'A' && xC == 'B') {
        printf("%.0lf %.0lf %.0lf", ordem[2], ordem[0], ordem[1]);
    } else if (xA == 'C' && xB == 'B' && xC == 'A') {
        printf("%.0lf %.0lf %.0lf", ordem[2], ordem[1], ordem[0]);
    }



}