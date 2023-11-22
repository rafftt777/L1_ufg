#include <stdio.h>

int main()
{
    int i = 2, mmc = 1, n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);


    do
    {
       if(n1 % i == 0 || n2 % i == 0 || n3 % i == 0)
        {
            printf("%d %d %d :%d\n", n1, n2, n3, i);
            mmc = mmc * i;
        }

        if(n1 % i == 0)
        {
             n1 /= i;
        }
        if(n2 % i == 0)
        {
             n2 /= i;
        }
        if(n3 % i == 0)
        {
             n3 /= i;
        }


        if(n1 % i == 0 || n2 % i == 0 || n3 % i == 0)
        {
            continue;
        }
        else
        {
            i++;
        }

    }while(n1 != 1 || n2 != 1 || n3 != 1);

    printf("MMC: %d\n", mmc);
}