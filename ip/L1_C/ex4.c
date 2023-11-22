#include <stdio.h>
#include <math.h>

int main()
{
    int X, Y, i, p;

    scanf("%d %d", &X, &Y);
    if(X % 2 != 0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR");
        return 0;
    }

    do
    {
        if(X % 2 == 0)
        {
            printf("%d ", X);
            Y--;
        }
        X++;
    }while(Y > 0);

}