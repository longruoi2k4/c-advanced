#include <stdio.h>

// Định nghĩa một hàm tính tổng hai số nguyên
int tong(int a, int b) {
    return a + b;
}

int main() {
    // Khai báo con trỏ hàm
    int (*ptr)(int, int);

    // Gán địa chỉ của hàm `tong` cho con trỏ
    ptr = &tong;

    // Gọi hàm thông qua con trỏ
    int result = ptr(5, 10);
    printf("Tong: %d\n", result);

    return 0;
}
