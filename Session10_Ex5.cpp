#include <stdio.h>
int main(){
    int arr[]={34, 7, 23, 32, 5, 62, 32, 4, 12, 22};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap vao mot so nguyen can tim: ");
    scanf("%d", &x);
    int l = 0, r = n - 1, result = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            result = m;
            break;
        }
        if (arr[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    if (result != -1)
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", x, result);
    else
        printf("Phan tu %d khong co trong mang.\n", x);
    return 0;
}

