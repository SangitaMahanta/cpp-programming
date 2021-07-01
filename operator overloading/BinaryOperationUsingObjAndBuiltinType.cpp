#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    ABC();
    ABC(int, int);
    friend ABC operator*(ABC &);
    friend ABC operator*(ABC &, int);
};

ABC::ABC()
{
}

ABC::ABC(int a, int b)
{
    ABC ::a = a;
    ABC ::b = b;
}
ABC  operator*(ABC &M)
{
    ABC T;
    T.a = a * M.a;
    T.b = b * M.b;
    return T;
}