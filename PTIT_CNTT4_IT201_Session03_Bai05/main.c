#include <stdio.h>
#include <stdlib.h>
int sumMain(int **arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }
    return sum;
}
int sumSub(int **arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][n - i - 1];
    }
    return sum;
}
int main(void) {
    int n;
    printf("Nhap so hang va so cot cua mang: \n");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("Chi so ma tran khong hop le!");
        return 1;
    }
    //Cap phat dong
    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Hay nhap phan tu vao mang: %d x %d\n", n,n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int mainSum = sumMain(arr, n);
    int subSum = sumSub(arr, n);

    printf("Tong duong cheo chinh cua mang la: %d\n", mainSum);
    printf("Tong duong cheo phu cua mang la: %d\n", subSum);

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

