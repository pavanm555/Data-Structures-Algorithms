#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    Node* left;
    Node* right;
    Node(int key){
        this->key = key;
        left = right = NULL;
    }
};

Node* insert(Node* root , int key){
    if(root == NULL){
        return new Node(key);
    }
    if(key > root->key){
        root->right = insert(root->right,key);
    }
    else{
        root->left = insert(root->left,key);
    }
    return root;
}

void printInorder(Node* root){
    if(root==NULL){
        return;
    }

    printInorder(root->left);
    cout<< root->key << ", ";
    printInorder(root->right);
}

Node* findMin(Node* root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

//BST Deletion
Node* remove(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(key< root->key){
        root->left = remove(root->left,key);
    }
    else if(key> root->key){
        root->right = remove(root->right,key);
    }
    else{
        // When the current node matches with the key
        // No children
        if(root->left==NULL and root->right==NULL){
            delete root;
            root = NULL;
        }
        // Single child
        else if(root->left==NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        // 2 children
        else{
            Node* temp = findMin(root->right);
            root->key = temp->key;
            root->right = remove(root->right,temp->key); 
        } 
    }
    return root;

}

int main(){
    Node* root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};

    for(int x:arr){
        root = insert(root,x);
    }

    printInorder(root);
    cout<< endl;

    int key;
    cin>>key;
    root = remove(root,key);

    printInorder(root);
    cout<< endl;

    return 0;
}