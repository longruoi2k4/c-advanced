#include <stdio.h>
#include <stdlib.h>

// Định nghĩa struct SinhVien
typedef struct {
    char ten[50];
    int tuoi;
    float diem;
} SinhVien;

int main() {
    // Khai báo biến struct
    SinhVien sv = {"Nguyen Van A", 20, 8.5};

    // Con trỏ trỏ tới struct
    SinhVien *ptr = &sv;

    // Truy cập dữ liệu qua con trỏ
    printf("Ten: %s\n", ptr->ten);
    printf("Tuoi: %d\n", ptr->tuoi);
    printf("Diem: %.2f\n", ptr->diem);

    return 0;
}
