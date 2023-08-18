#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> books;

    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("OS");
    while(!books.empty()){
        cout<<books.top()<<endl;
        books.pop();
    }

    return 0;
}