#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    // int*, char* -> pointers
    // to get the value of the variable ponted by a pointer use - *variableName
    int a = 3;
    int* b;
    b = &a;
    // if we add '&' to a variable before assignment(=) i.e in the left side, then this '&' will be called - ampersand/alias
    // if we add '&' to a variable after assignment(=) i.e in the right side, then this '&' will be called - address of
    // 
    int &c = a;


    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of b is "<<&b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** d = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<d<<endl; 
    cout<<"The value at address d is "<<*d<<endl; 
    cout<<"The value at address =  value_at(value_at(d)) is "<<**d<<endl; 
    cout<<"The value at address =  value_at(address of(b)) (address of a) is "<<*(&b)<<endl; 
    cout<<"The value at address =  value_at(address of(b)) (address of a) is "<<*&b<<endl; // we can write above like this
    cout<<"The value at address =  value_at(value_at(d)) is "<<*(*d)<<endl; 
    cout<<"The value at address =  value_at(adress of(d)) i.e address of b is "<<*(&d)<<endl; 

    return 0;
}