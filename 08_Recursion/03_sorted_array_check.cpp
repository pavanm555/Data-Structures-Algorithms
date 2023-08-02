#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    //base case
    if(n==0 or n==1){
        return true;
    }
    //rec case
    if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
        return true;
    }
    return false;
}

bool isSortedTwo(int arr[], int i, int n){
    if(i==n-1){
        return true;
    }
    if(arr[i]<arr[i+1] and isSortedTwo(arr,i+1,n)){
        return true;
    }
    return false;
}

int main(){
    int arr[] = {4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);

    cout<< isSorted(arr,n) << endl;
    cout<< isSortedTwo(arr,0,n) << endl;

    return 0;
}