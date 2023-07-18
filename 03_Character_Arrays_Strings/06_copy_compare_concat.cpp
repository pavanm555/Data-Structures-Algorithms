#include<iostream>
using namespace std;

int main(){
    char a[1000] = "apple";
    char b[1000];

    // Calc length
    cout<< strlen(a) << endl;

    // Copy
    strcpy(b,a);
    cout<< b << endl;

    // Compare
    cout << strcmp(a,b) << endl;

    // Concatenate
    char web[] = "www.";
    char domain[] = "google.com";

    strcpy(b,strcat(web, domain));
    
    cout << b << endl;

    cout << strcmp(a,b) << endl;

    return 0;

}