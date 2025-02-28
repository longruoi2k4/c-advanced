#include <stdio.h>

union Data {
    int i;
    double f;
};

int main() {
    union Data data;

    data.i = 10;
    printf("%d\n", sizeof(data)); // 8 byte

    data.f = 220.5;
    printf("%d", sizeof(data)); // 8 byte

    return 0;
}
