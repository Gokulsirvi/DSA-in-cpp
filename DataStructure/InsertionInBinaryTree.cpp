#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node* root;
    Node(){
    }
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
    void insert(Node* root){
        cout<<"Do you want to enter left of "<<root->data<<endl;
        bool ch;
        cin>>ch;
        if(ch){
            cout<<"enter left of = "<<root->data<<endl;
            int v ;
            cin>>v;
            root->left = new Node(v);
            insert(root->left);
            
        }
        cout<<"Do you want to enter right of "<<root->data<<endl;
        bool cch;
        cin>>cch;
        if(cch){
            cout<<"enter right of = "<<root->data<<endl;
            int v ;
            cin>>v;
            root->right = new Node(v);
            insert(root->right);
        }
    }
 void traversal(Node* root){
    if(root == nullptr){
        return;
    }
    traversal(root->left);
    cout << root->data << " ";
    traversal(root->right);
}

int main() {
    Node* root = new Node(10);
    insert(root);
    traversal(root);
    return 0;
}
