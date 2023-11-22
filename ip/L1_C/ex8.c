#include <stdio.h>

int main()
{
    double A, B;
    int a = 0;

    scanf("%lf %lf", &A, &B);

    if(A < B)
    {
        return 0;
    }

   do
   {
    A = A + ( A * 3.0 / 100);
    B = B + ( B * 1.5 / 100);
    a++;
   }while(A < B);

    printf("ANOS = %d\n", a);
}