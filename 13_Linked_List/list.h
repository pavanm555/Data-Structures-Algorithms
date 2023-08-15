#include<iostream>
using namespace std;

//forward declaration of class list.
class List;

class Node{
    int data;

public:
    Node* next;
    
    Node(int d):data(d),next(NULL){}

    int getData(){
        return data;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
        }
        cout<< "Deleting Node with Data "<< data << endl;
    }

    friend class List;
};

class List{
    Node * head;
    Node * tail;

    int searchHelper(Node *start, int key){
        //base case
        if(start==NULL){
            return -1;
        }
        //value matches
        if(start->data==key){
            return 0;
        }
        //remaining part of the linked list 
        int subIdx = searchHelper(start->next,key);
        if(subIdx==-1){
            return -1;
        }
        return subIdx+1;
    }

public:
    List():head(NULL),tail(NULL){}

    Node* begin(){
        return head;
    }

    void push_front(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos){
        if(pos==0){
            push_front(data);
            return;
        }
        else{
            Node * temp = head;
            for(int jump=1; jump<=pos-1; jump++){
                temp = temp->next;
            }

            Node * n = new Node(data);
            n->next = temp->next;
            temp->next = n;
        }
    }

    //Searching in a Linked List
    int search(int key){
        Node * temp = head;
        int idx = 0;
        while(temp!=NULL){
            if(temp->data == key){
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    int recursiveSearch(int key){
        int idx = searchHelper(head,key);
        return idx;
    }

    void pop_front(){
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        Node * temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    void remove(int pos){
        if(pos == 0){
            pop_front();
        }
        else{
            Node * temp = head;
            for(int jump=1;jump<=pos-1;jump++){
                temp = temp->next;
            }
            Node * n = temp->next;
            temp->next = n->next;
            n->next = NULL;
            delete n;
        }
    }

    void reverse(){
        Node * current = head;
        Node * prev = NULL;
        Node * temp;
        while(current!=NULL){
            temp = current->next;
            current->next = prev;
            //update pointers to next node and previous one.
            prev = current;
            current = temp;
        }
        head = prev;
    }
    ~List(){
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }
};
