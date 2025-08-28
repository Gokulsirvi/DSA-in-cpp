#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
void inOrder(Node* root){
    if(root){
        cout<<root->data<<" ";
        inOrder(root->left);
        inOrder(root->right);
    }
}
void preOrder(Node* root){
    if(root){
        preOrder(root->left);
        cout<<root->data<<" ";
        preOrder(root->right);
    }
}
void postOrder(Node* root){
    if(root){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

int main() {
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(6);
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    return 0;
}
