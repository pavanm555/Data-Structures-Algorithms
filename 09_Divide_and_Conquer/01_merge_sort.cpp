#include <iostream>
using namespace std;

//helper method
void merge(vector<int> &arr, int s, int e){
    int i = s;
    int m = (s+e)/2;
    int j = m+1;
    vector<int> temp;

    while(i<=m and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // copy rem elements from first array
    while(i<=m){
        temp.push_back(arr[i++]);
    }

    // or copy rem elements from second array
    while(j<=e){
        temp.push_back(arr[j++]);

    }

    //copy back the elements from temp to original array
    int k=0;
    for(int id=s; id<=e; id++){
        arr[id] = temp[k++];
    }
    return;
}

// sorting method
void mergesort(vector<int> &arr, int s, int e){
    // base case
    if(s>=e){
        return;
    }
    // rec case
    int mid = (s+e)/2;
    mergesort(arr, s, mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
}

int main(){
    vector<int> arr = {10,5,7,0,6,2,4};
    int s = 0;
    int e = arr.size()-1;

    mergesort(arr,s,e);

    for(int i : arr){
        cout<< i << ", ";
    }
    cout<< endl;

    return 0;
}
