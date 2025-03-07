#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc của một nút trong hàng đợi
struct Node {
    int data;
    struct Node* next;
};

// Định nghĩa cấu trúc của hàng đợi
struct Queue {
    struct Node *front, *rear;
};

// Hàm khởi tạo hàng đợi
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Hàm thêm phần tử vào hàng đợi
void enqueue(struct Queue* q, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    
    q->rear->next = newNode;
    q->rear = newNode;
}

// Hàm xóa phần tử khỏi hàng đợi
int dequeue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Hàng đợi rỗng!\n");
        return -1;
    }
    
    struct Node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;
    
    if (q->front == NULL) {
        q->rear = NULL;
    }
    
    free(temp);
    return data;
}

// Hàm hiển thị hàng đợi
void displayQueue(struct Queue* q) {
    struct Node* temp = q->front;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Queue* q = createQueue();
    
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    
    printf("Hàng đợi sau khi thêm phần tử: \n");
    displayQueue(q);
    
    printf("Dequeued: %d\n", dequeue(q));
    printf("Hàng đợi sau khi xóa một phần tử: \n");
    displayQueue(q);
    
    return 0;
}
