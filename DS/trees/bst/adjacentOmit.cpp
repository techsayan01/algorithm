#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
int totalSum(struct Node *root){
    int sum1;
    if(root == NULL) return 0;
    sum1 = root->data + totalSum(root->left) + totalSum(root->right);
    return sum1;
}

int keySum(struct Node *root, int key){
        
}

int main(){
    struct Node *root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(6);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);
    cout << totalSum(root) << endl;
}
