// 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node* n = new node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
}

void levelOrderPrint(node * root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        node* temp = q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            //insert new null for the next level
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return;
}

int height(node * root){
    if(root == NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return max(h1,h2) + 1;
}

int diameter(node * root){
    if(root == NULL){
        return 0;
    }

    int D1 = height(root->left) + height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);
    
    return max(D1, max(D2,D3));
}

int main(){
    node* root = buildTree();
    levelOrderPrint(root);
    cout<< "Height: " << height(root) << endl;
    cout<< "Diameter: "<< diameter(root) << endl;
    return 0;
}