#include <iostream>
using namespace std;
class X
{
    int a, b;
    int data1, data2, data3;
    char ch;

public:
    // Default constructor or Zero Argument Constructor
    X() {}
    //One argumenet constructor declartaion
    X(char);

    //two argument constructor
    X(char a, int b)
    {
        ch = a;
        data1 = b;
        cout << "char ch = " << ch << " & the data is = " << data1<<endl;
    }

    // Default argument of constructure
    X(int a, int b = 6, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void print()
    {
        cout << ch << " " << a << endl;
        cout << data1 << " " << data2 << " " << data3<<endl;
    }
};
X::X(char a){
    ch=a;
    cout<<"within one argument constructor"<<endl;
    cout<<"char ch = "<<ch;
}

int main()
{
    // X o2(111,22);
    // Implicit call
    X o1;
    X o2('s', 22);
    // Explicit Call
    X obj1 = X(11, 22, 33);
    obj1.print();

    X o3(44);
    o3.print();

    X o4(11, 22, 33);
    o4.print();
}
