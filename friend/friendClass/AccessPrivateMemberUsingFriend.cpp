#include <iostream>
using namespace std;
class XYZ;
class ABC
{
private:
    int a, b;
    void friend show(ABC, XYZ);

public:
    void setData(int, int);
};

class XYZ
{
private:
    int c, d;
    void friend show(ABC, XYZ);

public:
    void setData(int, int);
};

void ABC ::setData(int a, int b)
{
    ABC::a = a;
    ABC::b = b;
}
void XYZ ::setData(int c, int d)
{
    XYZ::c = c;
    XYZ::d = d;
}
void show(ABC P,XYZ Q){
    cout<<"Acessing private dataMember of ABC  class : "<<P.a<<" "<<P.b<<endl;
    cout<<"Acessing private dataMember of XYZ class : "<<Q.c<<" "<<Q.d<<endl;
}
int main()
{
    ABC P;
    XYZ Q;

    P.setData(11, 22);
    Q.setData(33,44);

    show(P,Q);
    return 0;
}