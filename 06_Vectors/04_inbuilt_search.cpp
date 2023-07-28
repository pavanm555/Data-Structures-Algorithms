#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {10,11,2,3,4,5,6,7,8};
    
    int key;
    cin>>key;

    vector<int>:: iterator it = find(arr.begin(),arr.end(),key);
   
    // index = address - base address
    if(it!=arr.end()){
        cout<<"Present at index "<< it - arr.begin() <<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    for(int i=0;i<arr.size();i++){
        cout<<&arr[i]<<", ";
    }

    return 0;
}