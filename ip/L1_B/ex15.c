#include <stdio.h>

int main(void)
{
    int n, nA = 0;
    int ni = 0;


    scanf("%d", &n);
    int nR = n;

 //cond de existencia
    if(n / 100000  >= 1)
    {
        printf("NUMERO INVALIDO");
        return 0;
    }

 //qnt. de algarismos
 int nmA = n;
 do
 {
    nmA /= 10;
    nA++;
 }while(nmA > 0);

 //inverter
 int i;
 for(i = 0; i < nA; i++)
 {
    ni *= 10;
    ni = ni + nR % 10;
    nR /= 10;
 }

 if(ni == n)
 {
    printf("PALINDROMO");
 }
 else if(ni != n)
 {
    printf("NAO PALINDROMO");
 }


}