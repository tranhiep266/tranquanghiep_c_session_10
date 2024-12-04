#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n, posi = -1;

    printf("Mang hien tai: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &n);

    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            posi = i;
            break;
        }
    }

    if (posi != -1) {
        printf("Phan tu %d ton tai trong mang tai vi tri %d.\n", n, posi);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", n);
    }

    return 0;
}
