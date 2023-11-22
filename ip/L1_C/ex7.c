#include <stdio.h>

int main()
{
    double NF, NT, n[8], l[5], presenca, matricula;
    double MP = 0;
    double ML = 0;

    int i, j;


    for(j = 0; j < 4; j++)
    {
    scanf("%lf", &matricula);

    for(i = 0; i < 8; i++)
    {
        scanf("%lf", &n[i]);
    }
    for(i = 0; i < 5; i++)
    {
        scanf("%lf", &l[i]);
    }

    scanf("%lf %lf", &NT, &presenca);

    for(i = 0; i < 8; i++)
    {
        MP = MP + (n[i]);
    }
    for(i = 0; i < 5; i++)
    {
        ML = ML + (l[i]);
    }

    NF = (0.7 * (MP / 8.0)) + (0.15 * (ML / 5.0)) + (0.15 * NT);

    printf("Matricula: %.0lf, Nota Final: %.2lf, Situacao Final: ", matricula, NF);

    if(presenca > 96 && NF >= 6)
    {
        printf("APROVADO\n");
    }
    else if(presenca > 96 && NF < 6)
    {
        printf("REPROVADO POR NOTA\n");
    }
    else if(presenca <= 96 && NF > 6)
    {
         printf("REPROVADO POR FREQUENCIA\n");
    }
    else if(presenca <= 96 && NF < 6)
    {
        printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
    }

    }
}



