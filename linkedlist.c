#include <stdio.h>
#include "linkedlist.h"

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printf("Linked List: ");
    displayList(head);

    deleteNode(&head, 20);
    printf("After deletion: ");
    displayList(head);

    return 0;
}