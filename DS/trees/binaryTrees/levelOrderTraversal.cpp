#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

//Declaring the functions
void levelOrder(struct Node *root, int h);
void printLevel(struct Node *root, int h);
int ht(struct node *root);


int ht(struct Node *root){
    int hright, hleft;
    if(root == NULL) return 0;
    //if(root->left == NULL && root->right == NULL) return h;
    hright = ht(root->right);
    hleft = ht(root->left);
    //if(hright > hleft)
    //    return hright+1;
    //else
    //    return hleft+1;
    //
    if(hleft > hright){
        return hleft + 1;
    }
    else{
        return hright + 1;
    }
    //hleft > hright ? return hleft + 1 : return hright + 1;
    //val = hright > hleft ? hright : hleft;
    //return val;
}

void levelOrder(struct Node *root, int h){
    for(int i = 1; i <= h; i++){
        printLevel(root, i);
    }
}

void printLevel(struct Node *root, int h){
  if(root == NULL) return;
  if(h == 1) cout << root->data << endl;
    //cout << root->data;
  else if (h > 1){
    printLevel(root->left, h-1);
    printLevel(root->right, h-1);
  }
}

int main(){
    struct Node *root = new Node(1);
    root->left = new Node (2);
    root->right = new Node (3);
    root->left->left = new Node (4);
    root->left->right = new Node (5);
    //root->right->right->right = new Node(7);
    root->right->left = new Node(6);
    int h = 0;
    h = ht(root);
    levelOrder(root, h);
    //cout <<endl << ht(root) << endl;
    return 0;
}
