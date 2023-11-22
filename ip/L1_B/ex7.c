#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d", &x);

    if(x < 1)
    {
        y = x;
    }
    else if(x == 1)
    {
        y = 0;
    }
    else if(x > 1)
    {
        y = (x * x);
    }
    printf("Y = %d\n", y);
}