#include <stdio.h>
#include <math.h>

int main(void)
{
    double N, e, erro, r[50];
    int k = 1;
    double tolerancia = 1e-9;  // Tolerância desejada

    scanf("%lf", &N);
    scanf("%lf", &e);

    for( ; ;)
    {
        r[0] = 1;
        r[k] = (((r[k - 1]) + (N / r[k - 1])) / 2.0);
        erro =  -1 * (N - pow(r[k], 2));

        printf("r: %.9lf, erro: %.9lf\n", r[k], erro);

        // Verifique se a diferença entre erro e zero é menor que a tolerância
        if (fabs(erro) < tolerancia)
        {
            break;  // Encerre o loop
        }
        k++;
    }
    return 0;
}