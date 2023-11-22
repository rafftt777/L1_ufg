#include <stdio.h>

int main()
{
    int n, i = 2;

    do{
        scanf("%d", &n);

    if(n < 1)
    {
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
    }
    }while(n <= 0);

    if(n == 1){
        printf("1 = 1\n");
        return 0;}

    printf("%d = ", n);
    do
    {
        if(n % i == 0)
        {
            n /= i;
            if(n / i > 0)
            {
                printf("%d x ", i);
            }
            else
            {
                printf("%d \n", i);
            }

        }
        else
        {
            i++;
        }

    }while(n != 1);
}