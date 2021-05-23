#include <iostream>
using namespace std;
class pythogarianTest
{
private:
    int a, b, c;

public:
    void setData(int p, int q, int r)
    {
        a = p;
        b = q;
        c = r;

        bool res = checkNum(a, b, c);
        
        if (res)
        {
            cout << "pythogarian tringle";
        }
        else
            cout << "Not a pythogarian tringle";
    }

    bool checkNum(int x, int y, int z)
    {
        int p, t;
        int res = max(x, max(y, z));
        if (res == x)
        {
            p = y;
            t = z;
        }
        else if (res == y)
        {
            p = x;
            t = z;
        }
        else
        {
            p = x;
            t = y;
        }

        if (res * res == p * p + t * t)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    int a, b, c;
    cout << "enter the number of a ,b and c : " << endl;
    cin >> a >> b >> c;

    pythogarianTest pt;
    pt.setData(a, b, c);

    return 0;
}
