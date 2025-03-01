#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Cấp phát bộ nhớ cho 5 số nguyên
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Loi cap phat bo nho!\n");
        return 1;
    }

    // Nhập dữ liệu
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Gán giá trị
    }

    // Xuất dữ liệu
    printf("Mang duoc cap phat bo nho:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Giải phóng bộ nhớ
    free(arr);
    return 0;
}
