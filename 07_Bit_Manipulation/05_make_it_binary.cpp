#include <iostream>
using namespace std;

int convertToBinary(int n){
    int ans = 0;
    int pow = 1;
    while(n>0){
        int last_bit = (n&1);
        ans += pow * last_bit;

        pow = pow*10;
        n = n>>1;
    }
    return ans;
}

int main(){
    int n;
    cin>> n;

    cout<< convertToBinary(n) << endl;

    return 0;
}
