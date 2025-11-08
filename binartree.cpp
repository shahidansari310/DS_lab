#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

//pre order traversal
void preorder(Node* node){
    if(node==NULL) return;

    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

//Inorder traversal
void inorder(Node *node){
    if(node == NULL) return;

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

//PostOrder traversal
void postorder(Node *node){
    if(node==NULL) return;

    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

//height of BST
int depth(Node *node){
    if(node==NULL) return 0;

    int lh=depth(node->left);
    int rh=depth(node->right);

    return 1+max(lh,rh);
}

int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);

    cout<<"Pre Order :";
    preorder(root);
    cout<<endl<<"In order :";
    inorder(root);
    cout<<endl<<"Post order : ";
    postorder(root);
    cout<<endl<<"Height of BT: "<<depth(root)<<endl;
    return 0;
}