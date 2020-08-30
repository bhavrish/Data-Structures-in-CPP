#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;

    node(int data) 
    { 
        this->data = data; 
        left=NULL; 
        right=NULL;
    } 
};


void preorder(node *curr) {
    if (curr!=NULL) {
        cout<<curr->data;
        preorder(curr->left);
        preorder(curr->right);
    }
}


int main() {
    node head(1);

    head.left=new node(2);
    //cout<<head.left;
    head.right=new node(3);
    head.left->left=new node(4);
    head.left->right=new node(5);
    head.right->left=new node(6);
    head.right->right=new node(7);
    node *temp=&head;
    preorder(temp);
}

//     1
//   2   3
// 4  5 6 7


