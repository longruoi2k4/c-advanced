#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    int num = 5;
    printf("Binh phuong cua %d la %d\n", num, SQUARE(num));
    return 0;
}