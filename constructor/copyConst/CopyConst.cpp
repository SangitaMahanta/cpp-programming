#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    ABC(int, int);
    ABC(ABC &);
    void display()
    {
        cout << " A = "<<a
             << " B = " << b<<endl;
    }
};
ABC::ABC(int a, int b)
{
    ABC::a = a;
    ABC::b = b;
}
ABC::ABC(ABC &X)
{
    cout << "within copy constructor"<<endl;
    ABC::a = X.a;
    ABC::b = X.b;
}

int main()
{
    // ABC X = ABC(11, 22); //explict call - getting an error 
    ABC X(11,22); //implicit call
    ABC Y = X; // copy constructor
    X.display();
    Y.display();
}