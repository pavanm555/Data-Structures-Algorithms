
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

    Product(Product &x){
        //Create to the copy
        id = x.id;
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
    
};

int main(){
    Product camera(101,"GoProHero9",28000,26000);
    camera.showDetails();

    //Copy is made using a special constructor -> copy constructor
    Product webcam(camera);
    webcam.showDetails();

    Product handycam = camera;
    handycam.setMrp(1000);
    handycam.showDetails();

    return 0;
}