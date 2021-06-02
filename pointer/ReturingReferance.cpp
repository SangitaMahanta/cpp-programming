#include <iostream>
using namespace std;
int &finding_largest_among_two(int &, int &);
int main()
{
    int a, b, c = -1;
    cout << "Entr the value of A and B :";
    cin >> a >> b;
    finding_largest_among_two(a, b) = c; // here finding_largest_among_two replace as either a, or b referance
                          // suppose it return b value then
                        //    b=c i.e b=-1
        if (c == a)                                     
    {
        cout << "\n A is greater";
    }
    else
        cout << "\n B is greater";
}

int &finding_largest_among_two(int &x, int &y)
{
    if (x > y)
        return x;
    else
        return y;
}