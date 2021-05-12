#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 34; 
    cout<<"The value of a was: "<<a;
    a = 45; 
    cout<<"The value of a is: "<<a;

    // Constants in C++
    // const int a = 3;
    const int b = 3;
    cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant but here it take local a
    // b = 45; // You will get an error because b is a constant
    cout<<"The value of a is: "<<b<<endl;

}
