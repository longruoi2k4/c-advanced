#include <stdio.h>
#include <stdarg.h>  // Thư viện hỗ trợ danh sách tham số biến

// Hàm tính tổng với số lượng tham số không xác định
int sum(int count, ...) {
    va_list args;  // Danh sách tham số
    va_start(args, count);  // Khởi tạo danh sách tham số

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);  // Lấy từng tham số kiểu int
    }

    va_end(args);  // Kết thúc danh sách tham số
    return total;
}

int main() {
    printf("Tổng 3 số (1, 2, 3): %d\n", sum(3, 1, 2, 3));
    printf("Tổng 5 số (4, 5, 6, 7, 8): %d\n", sum(5, 4, 5, 6, 7, 8));
    return 0;
}
