#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    //char s[1000] = {'a', 'b', 'c'};
    string s; // Dynamic array
    
    vector<string> sarr;
    int n = 5;

    while(n--){
        getline(cin,s);
        sarr.push_back(s);
    }
    
    for(string x : sarr){
        cout << x << endl;
    }

    return 0;
}