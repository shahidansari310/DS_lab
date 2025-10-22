#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* top = NULL;

void push(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

bool isEmpty() {
    return top == NULL;
}

void pop() {
    if (isEmpty()) {
        cout << "Underflow!"<<endl;
        return;
    }
    Node* temp = top;
    cout << temp->data << " popped from stack"<<endl;
    top = top->next;
    delete temp;
}

void peek() {
    if (isEmpty()) {
        cout << "Stack is empty!"<<endl;
        return;
    }
    cout << "Top element is: " << top->data << endl;
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty!"<<endl;
        return;
    }
    Node* temp = top;
    cout << "Stack elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    
    peek();
    pop();
    display();
    peek();
    
    pop();
    pop();
    pop();  
    
    return 0;
}
