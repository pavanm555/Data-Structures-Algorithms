#include <iostream>
using namespace std;

//Pass by reference using reference variables
void applyTax(int &income){
    float tax = 0.10;
    income = income - income*tax;
}

//Pass by reference using pointers
void watchVideo(int *viewsPtr){
    *viewsPtr = *viewsPtr + 1;
}

int main(){
    int income = 100;
    applyTax(income);
    cout << income << endl;

    int views = 100;
    watchVideo(&views);
    cout << views << endl;
}