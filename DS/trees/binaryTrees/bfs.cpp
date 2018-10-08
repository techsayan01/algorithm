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

void levelOrder(struct Node *root, int h);
void printLevel(struct Node *root, int h);
int height(struct Node *root);

int height(struct Node *root){
    int hleft, hright;
    if(root == NULL) return 0;
    hleft = height(root->left);
    hright = height(root->right);
    if(hright > hleft){
        return hright + 1;
    }
    else{
        return hleft + 1;
    }
}

void levelOrder(struct Node *root, int h){
    if(root == NULL) return;
    for(int i = 1; i <= h; i++){
        printLevel(root, i);
    }
}

void printLevel(struct Node *root, int h){
    if(root == NULL) return;
    if(h == 1) cout << root->data << endl;
    else if(h > 1){
        printLevel(root->left, h-1);
        printLevel(root->right, h-1);
    }
}

int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int h = height(root);
    levelOrder(root, h);
    return 0;
}
