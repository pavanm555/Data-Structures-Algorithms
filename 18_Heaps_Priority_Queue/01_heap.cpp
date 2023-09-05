// 1.Binary Tree
// 2.Complete Binary Tree - filling of the tree must be in the left to right order
// 3.Heap Order Property - Max heap (parent >= children)
//                         Min heap (parent <= children)

/*

 Heaps as an Array
    i
   / \
 2i   2i+1

 */

#include<iostream>
#include "heap.h"
using namespace std;

int main(){
    Heap h;
    h.push(10);
    h.push(20);
    h.push(30);
    h.push(25);
    h.push(70);
    h.push(40);
    h.push(50);
    
    cout<< h.top();
    

  return 0;
}