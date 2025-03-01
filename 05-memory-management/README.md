# Memory Management 
## Section 1: Build Process Overview
Preprocessing (.i) ----> Compilation (.s) ----> Assembly (.o) ---->Linking (.exe) ----> Execution

Static Linking: Là quá trình gộp tất cả các thư viện cần thiết vào tệp thực thi (executable) trong quá trình biên dịch -> chạy độc lập nhưng tốn tài nguyên.

Dynamic Linking: Là quá trình sử dụng thư viện bên ngoài khi chạy chương trình thay vì nhúng vào tệp thực thi -> Tiết kiệm bộ nhớ. 
## Section 2: Memory Layout
### Heap Segment
Chứa vùng nhớ cấp phát động bằng malloc(), calloc(), readloc()
### Stack Segment
Chứa vùng nhớ cố định, không thay đổi trong quá trình chạy chương trình:
- Local Variables
- Pointer
- Parameters
...
Khi Heap và Stack chạm nhau -> Stack Overflow.
## Section 3: Variable and Memory Location in C
### Memory Layout
.text: mã lệnh chương trình
.rodata: Dữ liệu cons
.data: Biến khởi tạo có giá trị.
.bss, COMMON: Biến không có giá trị khởi tạo.
Stack: Local Variables
Heap: Cấp phát động.
## Section 4: Linker File and Memory
Linking các file object và quyết định ghi các layout trên flash hay ram.
## Section 5: Pointer Variable
### Overview

int *ptr: Con trỏ kiểu integer.

*ptr: Toán tử truy cập tới giá trị mà địa chỉ con trỏ trỏ tới.

Size Pointer: phụ thuộc vào hệ điều hành đang sử dụng 4 byte (32-bit systems), 8 byte (64-bit systems).

### Types of Advanced Pointer

Pointer to Pointer. Example: int **x.

Pointer to Array. Example: int (*array_ptr)[5] - Con trỏ tới mảng 5 số nguyên.

Pointer to Function. Example: int (*func_ptr)(int, int) = &Function

### Dynamic Allocation

malloc() – Cấp phát bộ nhớ động

calloc() – Cấp phát và khởi tạo về 0

realloc() – Thay đổi kích thước bộ nhớ

free() – Giải phóng bộ nhớ

### Pointer Arithmetic

ptr++: Dịch con trỏ đến phần tử kế tiếp

ptr--: Dịch con trỏ đến phần tử trước đó

ptr + n: Dịch con trỏ lên n phần tử

ptr - n: Dịch con trỏ xuống n phần tử
### Void Pointer

Là con trỏ có thể trỏ đến bất kì kiểu dữ liệu nào -> Sử dụng trong lập trình tổng quát (Generic).
### Constant Pointer
Con trỏ hằng không thể thay đổi thay đổi địa chỉ trỏ tới nhưng có thể thay đổi giá trị của ô nhớ đó.
### Common Pitfalls
#### Dangling Pointers
Con trỏ trỏ đến vùng nhớ đã bị giải phóng, có thể gây crash hoặc hành vi không xác định.

Giải pháp: Sau khi free(), gán con trỏ về NULL.
#### Memory Leaks
Không dùng hàm free() đúng cách dẫn đến tiêu tốn tài nguyên.

