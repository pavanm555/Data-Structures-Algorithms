#include<iostream>
#include "01_linkedlist_stack.h"
using namespace std;

int main(){
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');
    while(!s.empty()){
        cout<< s.top() << endl;
        s.pop();
    }
    
}