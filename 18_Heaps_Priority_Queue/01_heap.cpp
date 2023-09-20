// 1.Binary Tree
// 2.Complete Binary Tree - filling of the tree must be in the left to right order
// 3.Heap Order Property - Max heap (parent >= children)
//                         Min heap (parent <= children)

// Complexity of Heapify is O(logN)

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
    int arr[] = {10,20,30,25,70,40,50};

    Heap h;
    for(int i:arr){
        h.push(i);
    }    
    
    while(!h.empty()){
        cout<< h.top() << endl;
        h.pop();
    }
  
    return 0;
}