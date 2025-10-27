#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insertAtbegin(int val){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=head;
    head=newNode;
}

void deleteAtend(){
    if(head==NULL){
        return;
    }
    struct Node* temp=head,*prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    if(prev==NULL){
        head=NULL;
    }
    else{
        prev->next=NULL;
    }
    free(temp);
}

void display() {
    struct Node* temp = head;
    printf("List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main(){
    insertAtbegin(10);
    insertAtbegin(20);
    insertAtbegin(30);
    display();

    deleteAtend();
    display();
    return 0;
}