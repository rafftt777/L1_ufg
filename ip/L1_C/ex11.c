#include <stdio.h>

int main() {
    int n, i, ko[100], sqt = 1, sql = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &ko[i]);
    }

    for(i = 1; i < n; i++) {
        if(ko[i] > ko[i - 1]) {
            sqt++;
            if (sqt > sql) {
                sql = sqt;
            }
        } else {
            sqt = 1;
        }
    }

    printf("O comprimento do segmento crescente maximo e: %d", sql - 1);
    return 0;
}
