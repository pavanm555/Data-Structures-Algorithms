// Reverse all the elements of the given array
// N/2 = O(N) time
#include <iostream>
using namespace std;

void reverse_array(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s < e){
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main(){
    int arr[] = {10,15,20,23,25,30,34,40,42};
    int n = sizeof(arr)/sizeof(int);

    // Before reverse
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    
    reverse_array(arr, n);
    // After reverse
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}