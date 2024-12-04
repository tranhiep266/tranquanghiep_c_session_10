#include <stdio.h>
int main() {
    int arr[] = {6, 2, 12, 20, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, min_index, temp;

    printf("Mang truoc khi sap xep: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < size - 1; i++) {
        min_index = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
