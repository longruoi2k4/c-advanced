#include <stdio.h>

// Hàm inline tính bình phương
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    printf("Bình phương của %d là %d\n", num, square(num));
    return 0;
}
