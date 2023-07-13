// Counting_Sort
// works by counting the number of objects having distinct key values.Then do some 
// arithmetic operations to calculate the position of each object in the output sequence. 
// O(N + Range) time

#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int a[],int n){
    // Largest Element
    int largest = -1;
    for(int i=0;i<n;i++){
        largest = max(largest, a[i]);
    }
    
    // Create a count array/vector
    vector<int> freq(largest+1, 0);

    // Update the freq array
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }

    // Put back the elements from freq into origina array
    int j=0;
    for(int i=0;i<largest+1;i++){
        while(freq[i]>0){
            a[j] = i;
            freq[i]--;
            j++;
        }
    }

}

int main(){
    int arr[] = {10,9,8,6,5,4,3,2,11,16,8};
    int n = sizeof(arr)/sizeof(int);

    counting_sort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}