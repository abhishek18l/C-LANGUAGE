#include <stdio.h>

int main() {
    int size, position, element;
  
    scanf("%d", &size);
    int arr[size + 1];  
  
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &position);
    scanf("%d", &element);

    if (position < 1 || position > size + 1) {
        printf("Invalid Input\n");
        return 0;
    }

    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;

    printf("Array after insertion is\n");
    for (int i = 0; i <= size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
