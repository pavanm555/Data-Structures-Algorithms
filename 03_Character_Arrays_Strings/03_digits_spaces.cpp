#include <iostream>
using namespace std;

// Given a sentence, count the number of alphabets, digits & spaces in the sentence.

int main(){
    char ch;
    ch = cin.get();

    int alpha = 0;
    int digit = 0;
    int space = 0;

    while(ch != '\n'){
        if((ch >= 'a' && ch <= 'z') or (ch >= 'A' && ch <= 'Z')){
            alpha++;
        }
        else if(ch >= '0' && ch <= '9'){
            digit++;
        }
        else if(ch == ' ' or ch == '\t'){
            space++;
        }
        ch = cin.get();
    }

    cout << "Total Alphabets: " << alpha << endl;
    cout << "Total Digits: " << digit << endl;
    cout << "Total Spaces: " << space << endl;

    return 0;
}
