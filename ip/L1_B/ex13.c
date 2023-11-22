#include <stdio.h>

int main(void)
{
    int c, d, r, g;

    scanf("%d %d %d", &c, &d, &r);

    if(c < 7 && d > 50 && r > 80000)
    {
        g = 10;
    }
    else if(c < 7 && d > 50 && r <= 80000)
    {
        g = 9;
    }
    else if(c < 7 && d <= 50 && r <= 80000)
    {
        g = 8;
    }
    else
    {
        g = 7;
    }

    printf("ACO DE GRAU = %d\n", g);
}