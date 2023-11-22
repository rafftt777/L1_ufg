#include <stdio.h>
#include <math.h>

int coord(int v) {
    int i;
    double rx, ry, rz;
    double vetx[v];
    double vety[v];
    double vetz[v];
    double max_difference;

    for (i = 0; i < v; i++)
        scanf("%lf %lf %lf", &vetx[i], &vety[i], &vetz[i]);

    for (i = 0; i < v - 1; i++) {
        rx = fabs(vetx[i] - vetx[i + 1]);
        ry = fabs(vety[i] - vety[i + 1]);
        rz = fabs(vetz[i] - vetz[i + 1]);

        max_difference = fmax(rx, fmax(ry, rz));
        printf("%.2lf\n", max_difference);
    }

    return 1;
}

int main(void) {
    int v;
    scanf("%d", &v);
    coord(v);
    return 0;
}
