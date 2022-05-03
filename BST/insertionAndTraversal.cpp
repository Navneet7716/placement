#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int data) { this->data = data; }
    Node() {}
};

Node* Insert(Node *node, int data) {

    if (node == NULL)
        return new Node(data);

    if (node->data < data)
    {
        node->right = Insert(node->right, data);
    }
    else if (node->data > data)
    {
        node->left = Insert(node->left, data);
    }

    return node;
}

void inorder(Node *node) {

    if (node == NULL)
        return;

    inorder(node->left);
    cout << node->data << " ";

    inorder(node->right);
}

void preorder(Node *node) {
    
    if (node == NULL) return;
    
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
    
}

// my logic
int preorderCount(Node *node, int count=0) {
    if (node == NULL) return count;
    count = preorderCount(node->left, count+1);
    count = preorderCount(node->right, count+1);
    return count;
}

int preorderCount2(Node *node) {
    if (node == NULL) return 0;
    return preorderCount2(node->left) + preorderCount2(node->right) + 1;
}

int heightOfTheTree(Node *root) {
    
    if (root == NULL) return 0;
    return max(heightOfTheTree(root->left), heightOfTheTree(root->right))+1; 
    
    
}

int main() {
    Node *root = new Node();
    root = NULL;
    root = Insert(root, 10);
    root = Insert(root, 30);
    root = Insert(root, 20);
    root = Insert(root, 60);
    root = Insert(root, 90);
    root = Insert(root, 100);
    root = Insert(root, 101);
    inorder(root);
    cout << "\npreorder\n";
    preorder(root);
    cout << "\n";
    cout << preorderCount2(root) << "\n";
    cout << "HEIGHT OF THE TREE\n" << heightOfTheTree(root);
}