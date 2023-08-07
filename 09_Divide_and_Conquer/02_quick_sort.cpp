// O(N log N)
// worst case O(N^2)

// Steps
/*  1. Choose a pivot - last element
    2. Partition
    3. Recursion on left and right subarrays 
*/
#include<iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int s, int e){
    int pivot = a[e];
    int i = s-1;

    for(int j=s;j<e;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return (i + 1);
} 

void quicksort(vector<int> &a, int s, int e){
    // Base case
    if(s>=e){
        return;
    }
    // Rec case
    int p = partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}


int main(){
    vector<int> arr{10,5,2,0,7,6,4};
    int n = arr.size();

    quicksort(arr,0,n-1);

    for(int x : arr){
        cout<< x << " ";
    }
    cout<< endl;
    return 0;
}
