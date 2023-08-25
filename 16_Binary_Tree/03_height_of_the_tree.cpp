// 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

Node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

int height(Node*root){
    if(root == NULL){
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);

    return max(h1,h1)+1;    
} 

int main(){
    Node * root = buildTree();
    int h = height(root);
    cout<< h << endl;

    return 0;
}