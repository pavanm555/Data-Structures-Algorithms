// Inbuilt Sort
// O(NlogN)
 
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){
    int arr[] = {10,9,8,6,5,4,3,2,11,16,8};
    int n = sizeof(arr)/sizeof(int);

    // Sort in asc
    // sort(arr, arr+n);

    // Sort in desc
    sort(arr, arr+n, compare);  //1
    // sort(arr, arr+n, greater<int>()); //2
    // reverse(arr, arr+n); //3

    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}