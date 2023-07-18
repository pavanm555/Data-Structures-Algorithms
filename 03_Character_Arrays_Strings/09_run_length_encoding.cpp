#include <iostream>
using namespace std;

// Run Length Encoding for String Compression
// If compressed string is bigger than original return original string

string compressString(string str){
    int n = str.length();
    string output;

    for(int i=0; i<n; i++){
        int count = 1;
        while(i < n-1 && str[i] == str[i+1]){
            count++;
            i++;
        }
        output += str[i] + to_string(count) ;
    }
    if(output.length() > str.length()){
            return str;
    }
    return output;
}

int main(){
    string s1 = "aaabbccddee";
    cout << compressString(s1) << endl;

    string s2 = "abcd";
    cout << compressString(s2) << endl;

    return 0;
}