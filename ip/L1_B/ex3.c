#include <stdio.h>

int main(void)
{
    int n3, n5;

    scanf("%d", &n3);
    
    n5 = n3;

    n3 = n3 % 3;
    n5 = n5 % 5;
    

    if(n3 == 0 && n5 == 0)
    {
        printf("O NUMERO E DIVISIVEL\n");
        return 0;
    }
    else
    {
        printf("O NUMERO NAO E DIVISIVEL\n");
        return 0;
    }
}