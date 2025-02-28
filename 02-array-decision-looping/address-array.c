#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Địa chỉ của mảng arr: %p\n", arr);

    // In ra đại chỉ 5 ô nhớ liên tiếp.
    // Mỗi ô nhớ cách nhau 4 byte.
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, Địa chỉ: %p\n", i, arr[i], &arr[i]);
    }

    return 0;
}
