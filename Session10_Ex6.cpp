#include <stdio.h>
int main() {
    int arr[] = {9, 1, 4, 7, 13, 14, 5, 14};
    int kich_thuoc = sizeof(arr) / sizeof(arr[0]);
    int n, posi[ kich_thuoc ], posi_count = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &n);

    for (int i = 0; i < kich_thuoc; i++) {
        if (arr[i] == n) {
            posi[posi_count] = i;
            posi_count++;
        }
    }

    if (posi_count > 0) {
        printf("Phan tu %d duoc tim thay tai vi tri: ", n);
        for (int i = 0; i < posi_count; i++) {
            printf("%d ", posi[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", n);
    }

    return 0;
}
