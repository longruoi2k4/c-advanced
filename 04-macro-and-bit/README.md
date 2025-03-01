# Macro And Bit Operations
## Section 1: C Preprocessor Overview
Tiền xử lí là quá trình chương trình xử lý mã nguồn trước khi biên dịch. Tiền xử lí xử lí các define, macro, tệp header,... bắt đầu bằng #.
Quá trình tiền xử lí bao gồm:
- inclusion of header files
- macro expansion
- conditional compilation
- diagnostics directives

Mã nguồn(.c)------->Tiền xử lý(.i)-------->Trình biên dịch(.o)------->Linking(.exe).
## Section 2: Macro
Macro là đoạn mã chương trình được đặt tên, bất cứ khi nào macro đó được sử dụng nó sẽ thay thế bằng toàn bộ nội dung của macro.
1. Object like Macro: Được định nghĩa bằng #define mà không có tham số
2. Multi-line Macro: Dùng ký tự \ để tiếp tục dòng lệnh trên nhiều dòng.
3. Function-like Macro
Syntax:
```c
#define Macro_Function_name(param0, param1,...) (expression)
```
4. Un-define and Re-define Macro: Dùng để thay đổi định nghĩa macro -> Tránh xung đột
## Section 3: C Preprocessor Directives
Chỉ thị #include được sử dụng để chèn tệp tiêu đề (header file) vào mã nguồn trước khi biên dịch.
Syntax:
```c
#include <filename.h>   // system header files
#include "filename.h"   // user defined cùng đường dẫn với source .c
```
### Biên dịch có điều kiện
#if - Kiểm tra điều kiện, điều kiện đúng thực hiện khối lệnh.

#ifdef - Kiểm tra nếu macro đã được định nghĩa

#ifndef - Kiểm tra nếu macro chưa được định nghĩa
#else - Xử lý với #if, #ifdef, #ifndef

#elif - Kiểm tra điều kiện khác nếu #if sai

#define và #undef - Định nghĩa và hủy macro

#error - Báo lỗi nghiêm trọng và dừng biên dịch

#warning - Báo cảnh báo nhưng vẫn tiếp tục biên dịch

#define STRINGIFY(x) #x - Chuyển x sang kiểu String

#define CONCAT(a, b) a##b - Ghép a và b
## Section 4: BIT OPERATIONS
### Shift bit <<, >>
Set 1 bit lên 1: number |= (1<<position)

Clear 1 bit về 0: number &= ~(1<<position)

Reading 1 bit là 0 hay 1: bit (number >> position)&1

Toggle 1 bit: number ^= (1<<position)