#include <stdio.h>

int main(void)
{
    float n1, n2, n3, r;

    scanf("%f %f %f", &n1, &n2, &n3);

    r = (n1 + n2 + n3) / 3;

        printf("MEDIA = %.2f\n", r);

    if(r >= 6)
    {
        printf("APROVADO\n");
    }
    else
    {
        printf("REPROVADO\n");
    }

    return 0;
}