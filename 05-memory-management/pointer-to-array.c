#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = arr; // Con trỏ trỏ đến mảng 1 chiều trong mảng 2D

    printf("Gia tri cua mang 2D:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ptr[i][j]); // Truy xuất từng phần tử trong mảng
        }
        printf("\n");
    }

    return 0;
}
