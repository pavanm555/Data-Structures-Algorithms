#include<iostream>
#include<queue>
using namespace std;

class compare{
public:
    bool operator()(int a, int b){
        return a<b;
    }
};


int main(){
    int arr[] = {10,20,30,25,70,40,50};

//  priority_queue<int, vector<int>, greater<int> > heap;
    priority_queue<int, vector<int>, compare > heap;
    for(int x : arr){
        heap.push(x);
    }

    while(!heap.empty()){
        cout<< heap.top() << endl;
        heap.pop();
    }

    return 0;
}