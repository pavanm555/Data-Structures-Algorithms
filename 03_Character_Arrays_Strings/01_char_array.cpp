#include <iostream>
#include <string>
using namespace std;

int main(){
    //char a[] = {'a','b','c','d','e','\0'};
    char a[] = "abcde";
    cout << a << endl;

    char b[100];
    cin >> b;
    cout << b << endl;
    cout << strlen(a) << endl; //number of visible characters
    cout << sizeof(a) << endl; // +1 because of null character

    return 0;
}