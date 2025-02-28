#include <stdio.h>

void print_number()
{
    static int a = 0; //local
    a++;
    printf("%d\n", a);
}

int main() 
{
    for (int i = 0; i <= 5; i++) \
    {
        print_number();
    }
    return 0;
}