// Constructor name = Class name
// called automatically when an object is created

#include<iostream>
using namespace std;

//Product (Shopping Website)
class Product{
private:
    int id;
    char name[100];       
    int mrp;
    int selling_price;
public:
    //Constructor
    Product(){
        cout<<"Inside constructor";
    }
    Product(int id,char *n,int mrp,int selling_price){
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        strcpy(name,n);
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
};

int main(){
    Product camera(101,"GoProHero9",28000,26000);
    cout<< "MRP "<< camera.getMrp() << endl;
    cout<< "Selling Price "<< camera.getSellingPrice() << endl;
    
    return 0;
}