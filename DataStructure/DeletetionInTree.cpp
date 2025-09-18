Node* minRight(Node* root){
    while(root && root->left != nullptr){
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int val){
    if(root == nullptr) return root;

    if(val < root->data){
        root->left = deleteNode(root->left, val);
    }
    else if(val > root->data){
        root->right = deleteNode(root->right, val);
    }
    else{
        // Node to be deleted found
        if(root->left == nullptr && root->right == nullptr){
            delete root;
            return nullptr;
        }
        else if(root->left == nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            // Two children
            Node* temp = minRight(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
