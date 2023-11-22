#include <stdio.h>

int main(void)
{
    float n;
    char cn;

    scanf("%f", &n);

    if(n <= 10 && n >= 9)
    {
        cn = 'A';
    }
    else if(n < 9 && n >= 7.5)
    {
        cn = 'B';
    }
    else if(n < 7.5 && n >= 6)
    {
        cn = 'C';
    }
    else if(n < 6 && n >= 0)
    {
        cn = 'D';
    }

    printf("NOTA = %.1f CONCEITO = %c\n", n, cn);
}