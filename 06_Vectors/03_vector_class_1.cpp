#include<iostream>
using namespace std;

class Vector{
    // Data Members
    int *arr;
    int cs; // Current size
    int ms; // Max size
public:
    // Constructor, Destructor, Methods
    Vector(int max_size=1){
        cs = 0; 
        ms = max_size;
        arr = new int[ms];
    }

    void push_back(const int d){
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

    bool isEmpty() const{
        return cs==0;
    }

    // Front, Back, At(i), []
    int front() const{
        return arr[0];
    }

    int back() const{
        return arr[cs-1];
    }
    
    int at(int i) const{
        return arr[i];
    }
    
    int size() const{
        return cs;
    }
    
    int capacity() const{
        return ms;
    }

    int operator[](const int i) const{
        return arr[i];
    }
};

int main(){
    Vector v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(15);
    v.push_back(6);
    v.pop_back();
    cout<< v.front() <<endl;
    cout<< v.back() <<endl;

    cout<< v.at(2) <<endl;

    cout<< v.size()<< endl;
    cout<< v.capacity()<< endl;

    for(int i=0;i<v.size();i++){
        cout<< v[i] << ", "; 
    }
}
