#include <stdio.h>

int main()
{
    int v, r, n, i;

    scanf("%d %d %d", &v, &r, &n);

    int vI = v;

    for(i = 2; i <= n; i++)
    {
        v = v + (vI + ( i - 1) * r);
    }

    printf("%d", v);

}