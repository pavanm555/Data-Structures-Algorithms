// Binary Search
// Searching algorithm used in a sorted array by repeatedly dividing the search 
// interval in half.The idea of binary search is to use the information that the
// array is sorted and reduce the time complexity to O(log N). 

/* (N/2^K) = 1
    N = 2^K
    K = log2(N)
*/ 

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
  
}

int main(){
    int arr[] = {10,15,20,23,25,30,34,40,42};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    
    int index = binary_search(arr,n,key);
    if (index != -1){
        cout<< key << " is found at index "<< index << endl;
    }
    else{
        cout<< key << " is not found!" << endl;
    }

    return 0;
}