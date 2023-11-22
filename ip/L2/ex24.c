#include <stdio.h>
#include <stdlib.h>

void countingSort(int arr[], int n) {
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count[max + 1];


    for (i = 0; i <= max; i++) {
        count[i] = 0;
    }


    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }


    int output[n];

    for (i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void count(int v) {
    int i;
    int ord[v];

    for (i = 0; i < v; i++)
        scanf("%d", &ord[i]);

    countingSort(ord, v);

    for (i = 0; i < v; i++)
        printf("%d ", ord[i]);

    printf("\n");
}

int main(void) {
    int v;

    do {
        scanf(" %d", &v);
        if (v != 0) {
            count(v);
        }
    } while (v != 0);

    return 0;
}
