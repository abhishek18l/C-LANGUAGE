#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    qsort(array, n, sizeof(int), compare);

    printf("The Sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    free(array);
    return 0;
}


