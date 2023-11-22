#include <stdio.h>


int main(void)
{
    double L, conta;
    int cliente;
    char cs;

    scanf(" %d %lf ", &cliente, &L);
    
    scanf(" %c", &cs);

    if(cs == 'R')
    {
        conta = 5 + (L * 0.05);
    }
    else if(cs == 'C')
    {
        if(L < 80)
        {
            conta = 500;
        }
        else
        {
            conta = 500 + ((L - 80) * 0.25);
        }
    }
    else if(cs == 'I')
    {
        if(L < 100)
        {
            conta = 800;
        }
        else
        {
            conta = 800 + ((L - 100) * 0.04);
        }
    }
    printf("CONTA = %d\n", cliente);
    printf("VALOR DA CONTA = %.2lf\n", conta);
    
    return 0;
}