# Variable in C
## Section 1: Variables
Biến là một vùng nhớ được đặt tên, dùng để lưu trữ dữ liệu trong chương trình.
## Section 2: Data types in C
- Primary Data Types: void, interal(integer, character), floating point.
- Derived Data Types: Array, Function, Pointer.
- User Defined Data Types: Struture, Union, enum.
## Section 3: Characteristics of variables
1. Global and local Variables
- Global variables are declared outside, can be accessed on any fucntion.
- Local variables are declared inside a function, and can be used only inside this function.
2. Time life: Duration which the variables exists in memory.
- Local: Allocated at the start of the function and deadllocated when it ends.
- Static: The entire duration of the program.
- Global: Same as static.
- Dynamic: Controlled by using free().
3. Scope: Part of the program where the variable can be accessed.
- Block: within the block (enclosed by {}).
- File: accssed by any function in same file.
- Function: applies to labels.
## Section 4: Key word
1. Static
- Static Local Variables: timelife is the entire duration of the program, scope is not changed.
2. Extern: declared a global variables but without any memory.
3. Register: store the variables in CPU register instead of memory -> fast but cann't get adress of variables.
4. Volatile: use for variables which can change in ways that can be determined by the compiler (interrupt service routine, i/o memory mapped multithreading).   
## Section 5: Pointer Variable
Pointer is a variable whose value is the address of another variable.
## Section 6: Structure Data Type
1. Structure: groups multiple variables of different types.
- Size: the number of min block (8 bypte = 1 block OS 64bit)
2. Union: same structure but all members in union share the same memory.
- Size: equal to the size of its largest member.
3. Enum: create symbolic constants.
- Size: equal to int.


