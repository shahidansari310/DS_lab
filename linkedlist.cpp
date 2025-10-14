#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int n) {
       this->data = n;   
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";  
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head,int data){
    Node* newNode=new Node(data);
    newNode ->next =head;
    head=newNode;
}

int main() {
    Node* head=NULL;
    insertAtHead(head,500);
    insertAtHead(head,000);
    insertAtHead(head,700);
    insertAtHead(head,900);

    print(head);

    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(40);
    
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // print(first);

    return 0;
}
