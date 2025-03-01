#include <stdio.h>

int main()
{
    // Dịch trái (Left Shift)
    int x = 5;         // 101
    x = x << 2;        // 10100
    printf("%d\n", x); // = 5 * 2^2 = 20

    // Bật bit (Set bit)
    int y = 41;        // 101001
    y |= (1 << 2);     // 101101 (Bật bit thứ 2 từ phải sang)
    printf("%d\n", y); // 45

    // Xóa bit (Clear bit)
    y &= ~(1 << 2);    // 101001 (Tắt bit thứ 2)
    printf("%d\n", y); // 41

    // Đọc bit (Read bit)
    int bit = (y >> 3) & 1;
    printf("%d\n", bit); // 0 (Vì bit thứ 3 trong 41 là 0)

    // Đảo bit (Toggle bit)
    y ^= (1 << 4);    // 111001 (Đảo bit thứ 4)
    printf("%d\n", y); // 57

    return 0;
}
