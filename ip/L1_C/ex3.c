#include <stdio.h>
#include <math.h>

int main()
{
    int N, P, i;

    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        if(i % 2 == 0)
        {
        P =  pow(i, 2);
        printf("%d^2 = %d\n", i, P);
        }

    }


}