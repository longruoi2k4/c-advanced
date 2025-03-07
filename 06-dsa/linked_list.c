#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc của một nút trong danh sách liên kết
struct Node {
    int data;
    struct Node* next;
};

// Hàm tạo một nút mới
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Lỗi cấp phát bộ nhớ!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Hàm thêm một nút vào cuối danh sách
void append(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Hàm xóa một nút theo giá trị
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head, *prev = NULL;
    
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) return;
    
    prev->next = temp->next;
    free(temp);
}

// Hàm in danh sách liên kết
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    
    printf("Danh sách sau khi thêm: \n");
    printList(head);
    
    deleteNode(&head, 20);
    printf("Danh sách sau khi xóa 20: \n");
    printList(head);
    
    return 0;
}
