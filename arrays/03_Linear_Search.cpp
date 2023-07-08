// Linear Search
// Searching algorithm to find the index of element in a given array
// O(N) time

#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        // Check if current element matches with the key
        if(arr[i] == key){
            return i;
        }
    }
    // Out of the loop
    return -1;
}

int main(){
    int arr[] = {10,15,20,25,30,40,45,35};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    
    int index = linear_search(arr,n,key);
    if (index != -1){
        cout<< key << " is found at index "<< index << endl;
    }
    else{
        cout<< key << " is not found!" << endl;
    }

    return 0;
}