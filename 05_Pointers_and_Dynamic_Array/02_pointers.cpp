// A pointer is a variable that holds the address of another variable.

#include <iostream>
using namespace std;

int main(){

    int x = 10;
    float y = 5.5;

    cout << &x << endl;
   //cout << &y << endl;

    // Pointer
    int *ptr = &x;
    cout << ptr << endl;

    // Address of a pointer variable
    cout << &ptr << endl;

    // Pointer to a pointer
    int **xptr = &ptr;
    cout << xptr << endl;

    return 0;
}
