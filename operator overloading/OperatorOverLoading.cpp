#include <iostream>
using namespace std;
class ABC
{
private:
    int a, b;

public:
    void setdata(int m, int n)
    {
        a = m;
        b = n;
    }
    void operator+()
    {
        a = -a;
        b = -b;
    }

    friend void operator-(ABC &X)
    {
        X.a = -X.a;
        X.b = -X.b;
    }

    void display(){
        cout<<"A = "<<a<<" B = "<<b<<endl;
    }
};
int main(){
    ABC X,Y,Z,W;
    X.setdata(11,22);
    Y.setdata(99,21);
    Z.setdata(33,87);
    W.setdata(32,81);

     X.display();
     X.display();
     Z.display();
     W.display();
cout<<endl;
     +X;
     Y.operator+();
     -Z;
     operator-(W);

     X.display();
     X.display();
     Z.display();
     W.display();
}