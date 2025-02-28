#include <stdio.h>

struct test
{
    char a;   // 1 byte
    char b;   // 1 byte -> a+b = 2 byte -> 1 block
    double c;   // 8 byte -> 1 block
    char d; // 1 byte  -> 1 block
};

int main()
{
    struct test test1;
    printf("%d\n", sizeof(test1)); // 8*3 = 24 byte.
}