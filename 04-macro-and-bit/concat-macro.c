#include <stdio.h>

#define STRINGIFY(x) #x
#define CONCAT(a, b) a##b  // Nối hai tên lại với nhau

int main() {
    int myVar = 42;
    printf("%s = %d\n", STRINGIFY(myVar), myVar);

    int xy = 100;
    printf("Giá trị của xy: %d\n", CONCAT(x, y));  // xy => 100
    return 0;
}
