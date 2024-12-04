#include <stdio.h>
int main() {
    int arr[] = {29, 10, 14, 37, 13, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, key;

    printf("Mang truoc khi sap xep: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
