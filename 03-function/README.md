# Function
## Section 1: Function là gì?
Hàm là một đoạn chương trình đặc biệt thực hiện một nhiệm vụ xác định -> Tái sử dụng, dễ fix Pug, bảo trì.
Syntax:
```c
type_specifier function_name(arguments)
{
    body of the function
}
```
## Section 2: Tham số của Function
Hàm xử lí dữ liệu thông qua tham số, có 2 khái niệm là truyền giá trị và truyền địa chỉ.
- Return (i): chuyển quyền điều khiển từ hàm về chương trình gọi nó chạy chính ngay lập tức. I trả về dưới dạng giá trị.
### Invoking Function
- Hàm gọi một hàm khác được gọi là hàm/thủ tục gọi.
- Hàm được gọi được gọi là hàm/ thủ tục được gọi.
### Function Prototye
Khai báo hàm mà chỉ có tham số, tên hàm và kiểu dữ liệu trả về, không có phần nội dung hàm.

```c
// Prototype
int foo(int arg1, char arg2);

// Definition
int foo(int arg1, char arg2) {
    return arg1 + arg2;
}
```
### Variable
- Local: khai báo bên trong hàm, được tạo khi nhập vào một khối và huỷ khi ra khỏi khối.
- Formal parameters: hoạt động như local variables.
### Function Scope 
- Phạm vi toàn cục: chức năng có thể nhìn thấy hoặc sử dụng trong nhiều đơn vị dịch.
- Phạm vi nội bộ: chức năng có thể nhìn thấy hoặc sử dụng trong môt đơn vị dịch.
### Passing Argument
- Value: Khi truyền giá trị, một bản sao có giá trị bằng biến truyền vào được tạo ra.
- Address: Khi truyền địa chỉ, các thay đổi hàm tạo ra sẽ ảnh hưởng trực tiếp tới biến ban đầu.Trong C, truyền tham chiếu được thực hiện bằng con trỏ (*).
## Section 3: Function Keyword
1. Static
Hàm tĩnh trong C là các hàm có phạm vi giới hạn, chỉ hiển thị với các hàm khác trong cùng 1 tệp.
2. Inline
Để nghị trình biên dịch chèn toàn bộ mã hàm vào trị trí được gọi thay vì chỉ gọi đến hàm đó như thông thường -> Dùng với những hàm nhỏ, gọi thường xuyên, tiết kiệm chi phí gọi hàm.
## Section 4: Function-Like Macro
Function-Like Macro là các Macro được định nghĩa giống như hàm nhưng ngắn gọn hơn và không phải viết mã đầy đủ.
Syntax:
```c
#define Macro_Function_name(param0, param1,...) (expression)
```
## Section 5: Recursion
Đệ quy là kỹ thuật hàm tự gọi lại chính nó -> Code ngắn gọn, dễ đọc nhưng kém hiệu quả và tốn bộ nhớ.
## Section 6: Variable Argument List
 Sử dụng danh sách đối số biến (variable argument list) để tạo các hàm có thể nhận một số lượng đối số không xác định. Điều này được thực hiện bằng cách sử dụng thư viện stdarg.h và các macro liên quan như va_list, va_start, va_arg, và va_end.