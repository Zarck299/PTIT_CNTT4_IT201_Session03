
#include <stdio.h>
#include <stdlib.h>
int findMax(int **arr, int row, int col){
    int max = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int findMin(int **arr, int row, int col){
    int min = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main(void) {
    int row, col;
    printf("Nhap so hang: \n");
    scanf("%d", &row);
    if (row <= 0 || row >= 1000) {
        printf("So hang khong hop le!");
        return 1;
    }
    printf("Nhap so cot: \n");
    scanf("%d", &col);
    if (col <= 0 || col >= 1000) {
        printf("So cot khong hop le!");
        return 1;
    }
    //Cap phat dong
    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
    }
    printf("Hay nhap phan tu vao mang: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int max = findMax(arr, row, col);
    int min = findMin(arr, row, col);
    printf("So lon nhat trong mang la: \n");
    printf("%d", max);
    printf("So nho nhat trong mang la: \n");
    printf("%d", min);
    for (int i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

