#include <iostream>
using namespace std;

int main(){
    
    int x = 10;
    int *ptr = &x;

    // Dereference operator
    cout << *ptr <<endl;

    // Reference variable
    int &y = x;
    
    y++;

    cout << x << endl;
    cout << y << endl;
    
    return 0;
}

