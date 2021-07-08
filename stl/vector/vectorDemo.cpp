#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Add even element in a vector ";
    int i = 0;
    while (i < 20)
    {
        if (i % 2 == 0)
        {
            v.push_back(i);
        }
        i++;
    }
    for (int i : v)
    {
        cout << i << " ";
    }
    cout<<endl;
    cout << "size is : " << v.size()<< " capacity is " << v.capacity()  << endl;
}