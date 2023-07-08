// arrays and functions
// arrays are passed by reference to functions

#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    cout<< "In function "<< sizeof(arr)<< endl;
    for(int i=0; i<n; i++){
        cout<< arr[i]<< endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<< "In main "<< sizeof(arr)<< endl;
    for(int i=0; i<n; i++){
        cout<< arr[i]<< endl;
    }
    
    printArray(arr, n);

    return 0;
}