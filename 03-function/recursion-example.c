#include <stdio.h>

// Hàm đệ quy tính giai thừa
long long factorial(int n) {
    if (n == 0) return 1;  // Điều kiện dừng
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Giai thừa của %d là %lld\n", num, factorial(num));
    return 0;
}
