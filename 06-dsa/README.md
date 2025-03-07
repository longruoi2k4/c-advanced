# Data Structure and Algorithms
## Section 1: Data Structures
Cấu trúc dữ liệu là một bộ lưu trữ được sử dụng để xử lý, truy xuất và lưu trữ, tổ chức dữ liệu.
```tree
Data Structure
├── Linear Data Structure
│   ├── Static: Array
│   └── Dynamic: Queues, Stack, Linked List
├── Non-linear Data Structure
|   ├── Tree
│   └── Graph
```
Linear Data Structure: Mỗi phần tử được gắn với các phần tử liền kề trước nó.
Non-linear Data Structure: Không thể duyệt các phần tử chỉ trong một lần chạy.
Static: Data có kích thước bộ nhớ cố định.
Dynamic: Kích thước không cố địnk, được cật nhật ngẫu nhiên trong Runtime.
### Array
Cấu trúc dữ liệu tuyến tính, các phần tử cùng kiểu dữ liệu, có chỉ số index.
- Advantage: truy cập ngẫu nhiêu O(1).
- Disadvantage: chèn hoặc tìm kiếm phần tử trong mảng O(n).
### Matrix/Grid
Matrix là một mảng 2 chiều với Rows và Columns.
### String
String là một mảng các kí tự. Bảng kí tự ASCII có 256 kí tự.
### Stack
Stack là một kiểu dữ liệu tuyến tính theo nguyên tắc LIFO (last in, first out); quản lí funtion call, memory,recursions,...
- Push: pushing một phần tử từ trên xuống stack.
- Pop: popping một phần tử ra khỏi top của stack.
### Heap
Một cây nhị phân có chiều cao h, sẽ có 2h+1 nodes, có 2 kiểu sắp xếp MaxHeap và MinHeap.
### Queue
Hàng đợi là cấu trúc dữ liệu kiểu tuyến tính theo nguyên tắc FIFO (First In First Out). Thường được dùng quản lí tasks, sắp xếp data và lập lịch.
### Linked List
Linked list là cấu trúc dữ liệu kiểu tuyến tính lưu trữ data dưới dạng các nodes được kết nối với nhau. -> Thuận tiện cho việc insertion và deletion.
Mỗi node là kiểu struct có phần data và con trỏ trỏ tới node khác.
### Tree
Tree là cấu trúc dữ liệu kiểu phi tuyến tính gồm các nodes được liên kết với nhau và được phân cấp theo mức level. Thưởng được sử dụng trong databases, algorithms,...
#### Binary Tree
- Mối node có nhiều nhất là 2 node con: Node trái và node phải.
### Graph
Đồ thị là cấu trúc dữ liệu kiểu phi tuyến tính gồm các nodes (verticle) và edges (links).
Hai cách biểu diễn:
- Ma trận liên kết.
- Danh sách liên kết.
## Section 2: Algorithms
### Sorting
- Buble Sort 
- Selection Sort 
- Insertion Sort  
- Merge Sort 
- Quick Sort
- Radix Sort
### Searching
- Tìm kiếm tuần tự
- Tìm kiếm nhị phân
