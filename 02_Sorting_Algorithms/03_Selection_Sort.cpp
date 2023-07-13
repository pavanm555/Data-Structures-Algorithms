// Selection Sort
// Repeatedly find te minimum element from unsorted part and putting it at the beginning
// O^2 time

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i; j<n; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(n);

    selection_sort(arr, n);

    for(int i=0; i<n; i++){
        cout<< arr[i] <<",";
    }

    return 0;
}