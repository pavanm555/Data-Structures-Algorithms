#include <iostream>
using namespace std;

int main(){
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "fifty",
        "hundred"
    };

    int n = 4;
    cout << numbers[n][1]<< endl;
    
    for(int i=0; i<8; i++){
        cout << numbers[i] <<endl;
    }

    return 0;
}