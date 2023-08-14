// Destructor - Function that is called automatically when the object is destroyed or deleted explicitly
// Compiler provides a default destructor
// User defines destructor is needed when class contains pointers to dynamically allocated memory
// It is used to avoid memory leaks

#include<iostream>
using namespace std;

//Product (Shopping Website)
class Product{
private:
    int id;
    char *name;       
    int mrp;
    int selling_price;
public:
    //Constructor
    Product(){
        cout<<"Inside constructor"<<endl;
    }
    Product(int id,char *n,int mrp,int selling_price){
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }

// we need to define our own copy constructor only if an object has pointers
// to dynamically allocated objects, ie a deep copy of object is needed.
    Product(Product &x){
        //Create to the copy
        id = x.id;
        //deep copy
        name = new char[strlen(x.name)+1];
        strcpy(name,x.name);
        mrp = x.mrp;
        selling_price = x.selling_price;
    }

// Deep copy inside Copy Assignment Operator
    void operator=(Product &x){
        cout<<"Inside Copy Assignment Operator"<<endl;
        //Create to the copy
        id = x.id;
        //deep copy
        name = new char[strlen(x.name)+1];
        strcpy(name,x.name);
        mrp = x.mrp;
        selling_price = x.selling_price;
    }

    //Setters
    void setMrp(int price){
        if(price>0){
        mrp = price;
        }
    }
    void setSellingPrice(int price){
        if(price > mrp){
            selling_price = mrp;
        }
        else{
            selling_price = price;
        }
    }

    //Getters
    int getMrp(){
        return mrp;
    }
    int getSellingPrice(){
        return selling_price;
    }
    void showDetails(){
        cout<<"Name: "<< name<<endl;
        cout<<"Id: "<< id<<endl;
        cout<<"Selling price: "<< selling_price<<endl;
        cout<<"MRP: "<< mrp<<endl;

        cout<<"--------------------"<<endl;
    }

    //Setter for the name
    void setName(char *name){
        strcpy(this->name,name);
    }

    //Destructor
    ~Product(){
        cout<<"Deleting "<<name<<endl;
        if(name!=NULL){
            delete [] name;
            name = NULL;
        }
    }
};

int main(){
    Product camera(101,"GoProHero9",28000,26000);
    
    Product old_camera; //Constructor
    //old_camera.setName("GoPro8");
    //old_camera.setSellingPrice(1000);

    old_camera = camera;
    old_camera.setName("GoPro8old");
    camera.showDetails();
    old_camera.showDetails();
    
    return 0;
}