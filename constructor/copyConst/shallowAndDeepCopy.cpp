#include<iostream>
using namespace std;

class X{
    int *a;
    int b;
    public:
        X(){
            cout<<"No argument constructor"<<endl;
            a = new int;
        }

        X(int x, int y){
            *a = x;
            b = y; 
        }

        void display(){
            cout<<*a<< "  "<<b<<endl;
        }

        X(X &obj){
            a = obj.a;
            b = obj.b;
        }

};

int main(){
    
    X o1(11,22);
    X o2;
    X o3 = o2;
    o3.display();
}