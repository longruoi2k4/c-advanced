#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;

    // Con trỏ void có thể trỏ đến bất kỳ kiểu dữ liệu nào
    void *ptr;

    ptr = &a;  // Trỏ đến biến int
    printf("Gia tri cua a: %d\n", *(int*)ptr); // Ép kiểu về int*

    ptr = &b;  // Trỏ đến biến float
    printf("Gia tri cua b: %.2f\n", *(float*)ptr); // Ép kiểu về float*

    return 0;
}
