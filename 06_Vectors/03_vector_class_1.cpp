#include<iostream>
using namespace std;

class Vector{
    // Data Members
    int *arr;
    int cs; // Current size
    int ms; // Max size
public:
    // Constructor, Destructor, Methods
    Vector(){
        cs = 0; 
        ms = 1;
        arr = new int[ms];
    }

    void push_back(int d){
        // Two cases
        if(cs==ms){
            // Create a new array and delete the old one, double the capacity
            int *oldArr = arr;
            ms = 2*ms;
            arr = new int[ms];
            // Copy the elements
            for(int i=0;i<cs;i++){
                arr[i] = oldArr[i];
            }
            // Delete
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back(){
        if(cs>=0){
            cs--; 
        }      
    }

    bool isEmpty(){
        return cs==0;
    }
};

int main(){
    Vector v;
}
