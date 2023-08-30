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

Node* insert(Node* root, int key){
    if(root==NULL){
        return new Node(key);
    }

    if(key < root->key){
        root->left = insert(root->left,key);
    }
    else{
        root->right = insert(root->right,key);
    }

    return root;
}

// O(H)
bool search(Node * root, int key){
    if(root == NULL){
        return false;
    }
    if(root->key == key){
        return true;
    }
    if(root->key > key){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

int main(){
    Node* root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};

    for(int x:arr){
        root = insert(root,x);
    }

    int key;
    cin>> key;
    if(search(root, key)==0)
        cout<< key << " not found" << endl;
    else
        cout<< key << " found" << endl;
        
    return 0;
}