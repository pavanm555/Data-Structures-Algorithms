#include<iostream>
using namespace std;

class Vector{
    // Data Members
    int *arr;
    int cs;
    int ms;
public:
    // Constructor, Destructor, Methods
    Vector(){
        cs = 0;
        ms = 1;
        arr = new int[ms];
    }

    void push_back(int d){
        //Two cases
        if(cs==ms){
            // Create a new array and delete the old one
            int *oldArr = arr;
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
        
    }
    

};

int main(){
    Vector v;
}
