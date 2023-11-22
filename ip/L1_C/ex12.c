#include <stdio.h>

// Função para calcular o fatorial de um número
int fato(int N) {
    int resultado = 1;
    int i;
    for (i = 1; i <= N; i++)
    {
        resultado *= i;
    }
    return resultado;
}

int main()
 {
    int N;
    int i;
    int j;
    scanf("%d", &N);

    if (N < 2)
    {
        printf("Campeonato invalido!\n");
        return 0;
    }

    int comb = fato(N) / (2 * (fato(N - 2)));

    int x = 1;
    for (i = 1; i < N; i++)
    {
        for (j = i + 1; j <= N; j++)
        {
            printf("Final %d: Time%d X Time%d\n", x, i, j);
            x++;
        }
    }

    return 0;
}






