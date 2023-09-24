#include<iostream>
#include "hash_table.h"
using namespace std;

int main(){
    Hashtable<int> h;
    h.insert("Mango", 100);
    h.insert("Apple", 120);
    h.insert("Banana", 140);
    h.insert("Orange", 200);
    h.insert("Kiwi", 210);
    h.insert("Papaya", 220);
    h.insert("Litchi", 300);

    h.print();

    string fruit;
    cin>>fruit;
    int *price = h.search(fruit);
    if(price!=NULL){
        cout<< "Price of fruit is "<< *price << endl;
    }
    else{
        cout<< "Fruit is not present";
    }


    return 0;
}
