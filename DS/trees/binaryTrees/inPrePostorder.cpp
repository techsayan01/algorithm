#include<iostream>

using namespace std;

struct Node 
{ 
    int data; 
    struct Node *left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
};

void preorder(struct Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

void inorder(struct Node *root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

int main(){ 
    struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);
    cout << "Preorder" << endl;
    preorder(root);
    cout <<endl << "Inorder" << endl;
    inorder(root);
    cout << endl << "Postorder" << endl;
    postorder(root);
    cout << endl;
    return 0;
}
