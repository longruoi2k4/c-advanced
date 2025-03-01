#include <stdio.h>

// Kiểm tra nếu macro DEBUG đã được định nghĩa
#ifdef DEBUG
    #define LOG(x) printf("DEBUG: %s\n", x)
#else
    #define LOG(x)  // Không làm gì trong chế độ Release
#endif

int main() {
    LOG("Chương trình đang chạy...");
    printf("Hello, World!\n");
    return 0;
}
