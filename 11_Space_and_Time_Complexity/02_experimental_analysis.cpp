#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    
    // reverse sorted array
    for(int i=0;i<n;i++){
        arr[i] = n - i;
    }

    auto start_time = clock();
    sort(arr.begin(),arr.end());
    auto end_time = clock();

    cout<< end_time - start_time << endl;
    
    return 0;
}