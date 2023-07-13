// Insertion Sort
// Similar to playing cards
// Insert the card in its correct position in a sorted part
// O^2 time

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=1; i<=n-1; i++){
        int current = arr[i];
        int prev = i-1;
        //loop to find the right index where the element current should be inserted
        while(prev>=0 and arr[prev] > current){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
       
}


int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);

    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }

    return 0;
}