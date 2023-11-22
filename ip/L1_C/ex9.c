#include <stdio.h>

int main(void)
{
    int n, ng, i, g = 0;
    int f = 1;

    scanf("%d", &n);
    ng = n;

    if(n == 0)
    {
        printf("0! = 1");
        return 0;
    }

    do
    {
        ng -= 1;
        g++;
    }while(ng > 0);


    for(i = 0; i < g; i++)
    {
        f = f * (n - i);
    }

    printf("%d! = %d", n, f);


}