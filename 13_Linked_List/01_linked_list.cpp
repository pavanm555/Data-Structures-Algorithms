#include<iostream>
#include "list.h"
using namespace std;

int main(){
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.insert(2,2);
    l.insert(10,1);
    l.remove(4);
    
    l.reverse();
    
    Node* head = l.begin();
    while(head!=NULL){
        cout<< head->getData()<<"->";
        head = head->next;
    }
    cout<< endl;

    
    
    /* 
    l.pop_front();
    l.pop_back();

    int key;
    cin>> key;
    
    cout<< l.recursiveSearch(key)<<endl;
    */
    return 0;
}