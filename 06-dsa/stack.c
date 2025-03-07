#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// Định nghĩa cấu trúc stack
typedef struct {
    int data[MAX];
    int top;
} Stack;

// Khởi tạo stack
void init(Stack *s) {
    s->top = -1;
}

// Kiểm tra stack có rỗng không
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Kiểm tra stack có đầy không
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Thêm phần tử vào stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full!\n");
        return;
    }
    s->data[++s->top] = value;
}

// Loại bỏ phần tử khỏi stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1; // Giá trị không hợp lệ
    }
    return s->data[s->top--];
}

// Lấy phần tử đầu stack nhưng không loại bỏ
int top(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->data[s->top];
}

// Hàm main để kiểm tra
int main() {
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element: %d\n", top(&s)); // 30
    printf("Popped: %d\n", pop(&s)); // 30
    printf("Popped: %d\n", pop(&s)); // 20
    printf("Popped: %d\n", pop(&s)); // 10
    printf("Popped: %d\n", pop(&s)); // Stack is empty!

    return 0;
}
