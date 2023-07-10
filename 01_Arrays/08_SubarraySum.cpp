// Print largest_sum subarray sum of the given array

#include <iostream>
using namespace std;

// Brute force approach, O(N^3) time
int largestSubarraySum1(int arr[], int n){
    int largest_sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subarraysum = 0;
            for(int k=i;k<=j;k++){
               subarraysum += arr[k];
            }
            largest_sum = max(largest_sum, subarraysum);
        }
    }
    return largest_sum;
}

// Prefix sum approach, O(N^2) time
int largestSubarraySum2(int arr[], int n){

    // Prefix sums
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subarraysum = i>0? prefix[j] - prefix[i-1] : prefix[j];
           
            largest_sum = max(largest_sum, subarraysum);
        }
    }
    return largest_sum;
}

// Kadanes algorith approach, O(N)time
int largestSubarraySum3(int arr[], int n){
    int cs = 0;
    int largest_sum = 0;
    for(int i=0; i<n; i++){
        cs += arr[i];
        if(cs<0){
            cs = 0;
        }
        largest_sum = max(largest_sum, cs);
    }
    return largest_sum;
}

int main(){
    int arr[] = {10,-20,-30,40,-50,60};
    int n = sizeof(arr)/sizeof(int);

    cout << largestSubarraySum1(arr, n) << endl;
    cout << largestSubarraySum2(arr, n) << endl;
    cout << largestSubarraySum3(arr, n) << endl;

    return 0;
}
