// Class = (Blueprint) Blueprint that tells the compiler how to make an actual object 
// Object = (Real Entity) Object is instance of the class and occupies memory.
// So classes are needed to make objects in memory
// Class = data members + member functions

#include<iostream>
using namespace std;

//Product (Shopping Website)
class Product{
    int id;
    char name[100];
public:         
    int mrp;
    int selling_price;
};

int main(){
    Product camera;
    // selling_price <= mrp
    camera.mrp = 100;
    camera.selling_price = 200;

    cout<< sizeof(camera)<<endl;
    cout<< "MRP "<< camera.mrp << endl;
    cout<< "Selling Price "<< camera.selling_price << endl;

    return 0;
}