#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    int *arr;

    printf("Nhap so phan tu ban dau: \n");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    printf("Nhap %d phan tu vao mang: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so phan tu muon them: \n");
    scanf("%d", &m);
    if (m <= 0 || n + m > 1000) {
        printf("So phan tu khong hop le\n");
        free(arr);
        return 1;
    }

    int *temp = realloc(arr, (n + m) * sizeof(int));
    if (temp == NULL) {
        printf("Khong the cap phat bo nho!\n");
        free(arr);
        return 1;
    }
    arr = temp;

    printf("Nhap %d phan tu moi: \n", m);
    for (int i = n; i < n + m; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang sau khi them m phan tu: [");
    for (int i = 0; i < n + m; i++) {
        printf("%d", arr[i]);
        if (i < n + m - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(arr);
    return 0;
}
