#include <stdio.h>

#define STRINGIFY(x) #x  // Chuyển x thành chuỗi

int main() {
    printf("%s\n", STRINGIFY(Hello, World!));
    printf("%s\n", STRINGIFY(123 + 456));
    return 0;
}
