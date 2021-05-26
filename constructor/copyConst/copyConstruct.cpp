#include <iostream>
using namespace std;
class ABC
{
private:
    int a, b;

public:
    ABC()
    {
        a = 0;
        b = 0;
    }
    ABC(int m, int n)
    {
        a = m;
        b = n;
    }
    ABC(ABC &T)
    {
        cout << "within copy constructor";
        a = T.a;
        b = T.b;
    }
    void display()
    {
        cout<<"\n A = "<<a<<" & B = "<<b;
    }
};

int main()
{
    ABC X, Y(22, 33), Z = Y; //z=y will invoke the copy constructor for object
    X = Y;                   //deep copy constructor not invoke the copy const.
    cout<<"Data of object X:- ";
    X.display();
    cout<<endl<<"Data of object Y:- ";
    Y.display();
    cout<<endl<<"Data of object Z:- ";
    Z.display();
    return 0;
}