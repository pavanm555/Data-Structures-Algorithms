#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr,int n){
    // print array
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

void fillArray(vector<int> &arr, int i, int n, int val){
    // base case
    if(i==n){
        printArray(arr,n);
        return;
    }
    // rec case
    arr[i] = val;
    fillArray(arr,i+1,n,val+1);
    // backtracking
    arr[i] *= -1;
}
int main(){
    vector<int> arr(100, 0);
    int n;
    cin>>n;
    fillArray(arr,0,n,1);
    printArray(arr,n);

    return 0;
}