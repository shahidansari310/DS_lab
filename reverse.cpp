#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* reverseLL(Node* head){
    struct Node *curr=head,*next=NULL,*prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }

    return prev;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
     Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};
    head->next->next->next = new Node{4, NULL};

    cout << "Original List: ";
    printList(head);

    head = reverseLL(head);

    cout << "Reversed List: ";
    printList(head);
    return 0;
}