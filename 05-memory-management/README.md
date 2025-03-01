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
1. Overview

