#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Global top pointer for stack
struct Node* top = NULL;

// Function to insert node at beginning (used by push)
void insertAtbegin(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to display list (for showing stack)
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Stack push operation
void push(int x) {
    insertAtbegin(&top, x);
    printf("%d pushed to stack\n", x);
}

// Stack pop operation
void pop() {
    if (top == NULL) {
        printf("Stack Underflow!\n");
        return;
    }
    struct Node* temp = top;
    printf("%d popped from stack\n", top->data);
    top = top->next;
    free(temp);
}

// Stack peek operation
void peek() {
    if (top == NULL) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element is %d\n", top->data);
    }
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);

    printf("\nCurrent Stack:\n");
    displayList(top);

    peek();

    pop();
    printf("\nAfter one pop:\n");
    displayList(top);

    peek();

    return 0;
}
