#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr;
    printf("Nhap so luong phan tu cua mang(toi da 100 phan tu): \n");
    scanf("%d", &n);
    if (n <= 0 || n >= 100) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }
    arr = (int *)malloc(n* sizeof(int));
    if (arr == NULL) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap cac phan tu vao mang: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu trong mang la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}