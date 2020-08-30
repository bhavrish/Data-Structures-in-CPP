#include <iostream>

using namespace std;

class Node {
    int value;
    Node *left;
    Node *right;

    public:
        Node(int value) {
            this.value=value;
            left=NULL;
            right=NULL;
        }

}

void preorder(Node *root, Node *root2) { // root left right
    cout<<root->value;
    preorder(root->left);
    preorder(root->right);
} 

void isIdentical(Node *root, Node *root2) {
    vector<int> v1;
    vector2<int> v2;

    while (root->left!=NULL) {
        v1.push_back(root->value);
    }

    v2.push_back(root2->value);
}


// main function
int main()
{
    // construct first tree
    Node* root = nullptr;
    
    root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);

    preorder(root);

    // construct second tree
    Node* y = nullptr;
    
    y = new Node(15);
    y->left = new Node(10);
    y->right = new Node(20);
    y->left->left = new Node(8);
    y->left->right = new Node(12);
    y->right->left = new Node(16);
    y->right->right = new Node(25);

    if (isIdentical(x, y))
        cout << "Given binary Trees are identical";
    else
        cout << "Given binary Trees are not identical";

    return 0;
}