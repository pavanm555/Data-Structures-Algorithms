/* An array is a collection of elements of the same type placed in contiguous memory locations.
	• Create
	• Input
	• Output
	• update 
*/
#include <iostream>
using namespace std;

int main(){
    int marks[100] = {0};
     
     int n;
     cout<<"Enter the no of students: ";
     cin>>n;
     // Input
     for(int i=1; i<=n; i++){
        cin>> marks[i];
    // Update
        marks[i] = marks[i]*2;
     }
    // Output
     for(int i=1; i<=n; i++){
        cout<< marks[i] <<", ";
     }
     cout<< endl;

     return 0;
}

