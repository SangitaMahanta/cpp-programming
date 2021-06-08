#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    void setData(int a, int b)
    {
        ABC::a = a;
        ABC::b = b;
    }
    void friend sum(ABC P)
    {
        int res = P.a + P.b;
        cout << "The summation result is : " << res;
    }
};

int main()
{
    ABC P;
    P.setData(11, 22);
    sum(P);
    return 0;
}