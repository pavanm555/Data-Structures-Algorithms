// Vectors are sequence containers representing arrays that can change in size
// Like arrays, their elements can be accessed directly in O(1) time.
// Size can change dynamically
// g++ -std=c++11

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Demo Vector
    // vector<int> arr = {1,2,10,12,15};

    // Fill Constructor
    vector<int> arr(10,7);

    // Pop_Back
    arr.pop_back();

    // Push_Back O(1)
    arr.push_back(16);

    // Print all the elements
    for(int i=0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout<<endl;
    
    for(int i : arr){
        cout << i << ", ";
    }
    cout << endl;

    
    /* // Size of the vector (No of elements)
    cout << arr.size() << endl;

    // Capacity of the vector
    cout << arr.capacity() << endl;
    */
    return 0;
}
