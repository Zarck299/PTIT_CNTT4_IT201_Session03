#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr;
    printf("Nhap so luong phan tu cua mang(toi da 1000 phan tu): \n");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
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
    //Tinh trung binh cong cac so chan
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0) {
        printf("Khong co so chan nao trong mang");
    } else {
        float ave_sum = (float)sum / count;
        printf("Trung binh cong cac so chan la: %.2f\n", ave_sum);
    }
    free(arr);
    return 0;
}