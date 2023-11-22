#include <stdio.h>

int main(void)
{
    float s, kw, cust, consumo, custD;

    scanf("%f %f", &s, &kw);

    cust = ((70.0/100.0) * s) / 100.0;
    consumo = cust * kw;
    custD = consumo - (consumo * (10.0/100.0));

    printf("Custo por kW: R$ %.02f\n", cust);
    printf("Custo do consumo: R$ %.02f\n", consumo);
    printf("Custo com desconto: R$ %.02f\n", custD);
}