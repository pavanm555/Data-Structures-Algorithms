#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Car{
public:
    string id;
    int x,y;
    Car(string id,int x,int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist(){
        return x*x + y*y; //square of the dist
    }
};

class CarCompare{
    bool operator()(const Car A, const Car B){
        return A.dist() < B.dist(); // max heap
    }
};

void printNearestCars(vector<Car> cars,int k){

    //create a max heap of size K
    priority_queue<Car, vector<Car>, CarCompare max_heap(cars.begin(), cars.begin()+k);

}

int main(){
    int N,K;
    cin>>N>>K;

    string id;
    int x,y;

    vector<Car> cars;
    for(int i=0;i<N;i++){
        cin>> id>> x>> y;
        Car car(id,x,y);
        cars.push_back(car);
    }
    printNearestCars(cars,K);

    return 0;
}