#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void display(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,int val){
    Node * newNode=new Node(val);

    newNode->next=head;
    head=newNode;
}

void insertAtEnd(Node* &head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    Node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAfter(Node* &head,int val,int key){
    Node* newNode=new Node(val);
    
    if(head==NULL) return;
    
    Node* temp=head;
    
    while( temp!=NULL && temp->data!=key){
        temp=temp->next;
    }
    
    if(temp == NULL) return;

    newNode->next=temp->next;
    temp->next=newNode;
}

void insertBefore(Node* &head,int val,int key){
    Node* newNode=new Node(val);
    
    if(head==NULL) return;
    
    if (head->data == key){
        insertAtHead(head,val);
        return;
    }
    
    Node * temp=head;
    
    while(temp->next!=NULL && temp->next->data!=key){
        temp=temp->next;
    }
    
    if (temp->next == NULL) return;
    
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteAtbegin(Node* &head){
    Node* temp=head;
    head=head->next;
    delete temp;
}

void deleteAtend(Node* &head){
    if(head==NULL) return;

    if(head->next == NULL) { 
        delete head;
        head = NULL;
        return;

    }
    Node* temp=head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    delete temp->next;
    temp->next=NULL;    
}

void deleteAfter(Node* &head, int key) {
    if(head == NULL) return;

    Node* temp = head;

    while(temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}


void deleteBefore(Node* &head, int key) {
    if(head == NULL || head->data == key) return; 

    Node* prev = NULL;        
    Node* curr = head;

    if(head->next != NULL && head->next->data == key) {
        Node* del = head;
        head = head->next;    
        delete del;
        return;
    }

    while(curr->next != NULL && curr->next->data != key) {
        prev = curr;
        curr = curr->next;
    }

    if(curr->next == NULL) return;

    Node* del = curr;
    prev->next = curr->next;
    delete del;
}

Node* reverse(Node* &prev,Node* &curr){
    if(curr==NULL){
        return prev;
    }
    Node* temp=curr->next;
    curr->next=prev;

    reverse(curr,temp);
}


int main(){

    // Node * first=new Node(10);
    // Node * first=NULL;
    // Node * second=new Node(20);
    // Node * third=new Node(30);
    // Node * fourth=new Node(40);

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // insertAtHead(first,90);
    // insertAtEnd(first,60);
    // cout<<"Printing LL"<<endl;
    // display(first);

    // Node* head = new Node(10);
    // insertAtEnd(head, 20);
    // insertAtEnd(head, 30);

    // insertAfter(head, 25, 20); 
    // display(head);



    Node* head = NULL;

    cout << "Insert at End: ";
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    display(head); 

    cout << "Insert at Head: ";
    insertAtHead(head, 5);
    display(head); 

    cout << "Insert After 20: ";
    insertAfter(head, 25, 20);
    display(head); 

    cout << "Insert Before 10: ";
    insertBefore(head, 7, 10);
    display(head); 

    // cout<<"Delete At Begin ";
    // deleteAtbegin(head);
    // display(head);

    // cout<<"Delete At End ";
    // deleteAtend(head);
    // display(head);
    Node* prev=NULL;
    Node* curr=head;
    head=reverse(prev,curr);
    display(head);

    return 0;
}