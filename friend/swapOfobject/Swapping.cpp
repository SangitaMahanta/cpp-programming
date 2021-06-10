#include <iostream>
using namespace std;
class XYZ
{
private:
    int a, b;

public:
    void setData(int m, int n)
    {
        a = m;
        b = n;
    }
    void friend swap(XYZ &,XYZ &);
    
    void  display(XYZ P, XYZ Q)
    {
        cout << "The value of P : " << P.a << " " << P.b << endl;
        cout << "The value of Q : " << Q.a << " " << Q.b<<endl<<endl;
    }
};
void swap(XYZ &P, XYZ &Q)
{
        XYZ T;
        T.a = P.a;
        T.b = P.b;

        P.a = Q.a;
        P.b = Q.b;

        Q.a = T.a;
        Q.b = T.b;
    }
    

int main()
{
    XYZ P, Q;
    P.setData(11, 88);
    Q.setData(99, 35);
    cout<<"Before swapping :-"<<endl;
     P.display(P, Q);
    swap(P, Q);
    cout<<"After swapping :-"<<endl;
    P.display(P, Q);
}
