#include <iostream>
using namespace std;

class X
{
    int *a;
    int b;

public:
    X()
    {
        cout << "No argument constructor" << endl;
        a = new int;
    }

    X(int x, int y)
    {
        *a = x;
        b = y;
    }

    void display()
    {
        cout << *a << "  " << b << endl;
    }

    X(X &obj)
    {
        // deep copy is invoked when one object is invoked memory from heap area.
        a = new int;
        // (obj.a)-->will be an address of pointer a
        // when we put *(obj.a) -->it will gives the value of the adress and it will be assigned to a
        //  since a is also a pointer and we are asigning  a value to it so we need to put a star before a i.e *a
        //  *a = *(obj.a); // value to value
        b = obj.b;
        cout << *a << "  " << b << endl;

        // the below line means the adress of obj( as we have passed o2 from main method).a which is a pointer is assigned to 'a' field which is of type  pointer
        // which is a pointer is assigned to 'a' field which is of type  pointer
         a = obj.a; // address to adress assignment 
            b = obj.b;
            cout<<*a<< "  "<<b<<endl;
    }
};

int main()
{

    X o1(11, 22);
    X o2;
    o2.display();
    X o3 = o2;// X o3(o2);
    o3.display();
}