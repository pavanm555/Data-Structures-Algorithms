// write a function to find power of a number, both number & power are given as input!
// O(N) time
#include<iostream>
using namespace std;

int power(int a, int n){
    if(n==0){
        return 1;
    }
    return a * power(a, n-1);
}

// log N space and time 
int fastPower(int a, int n){
    if(n==0){
        return 1;
    }
    int subProb = fastPower(a,n/2);
    int subProbSq = subProb * subProb;
    if(n&1){
        return a * subProbSq;
    }
    return subProbSq;

}

int main(){
    int a,n;
    cin>>a>>n;

    cout<< fastPower(a,n)<< endl;

    return 0;
}