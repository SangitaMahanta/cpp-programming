// vector is used for dynamic array
// capacity is how many memory uses and size is how many elements are stored

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    //vactor capacity
    cout << " capacity = " << v.capacity() << endl; //capacity = 0
    v.push_back(1);
    cout << " capacity = " << v.capacity() << endl; //capacity = 1
    v.push_back(2);
    cout << " capacity = " << v.capacity() << endl; //capacity = 2
    v.push_back(3);
    cout << " capacity = " << v.capacity() << endl; //capacity = 4 here we push 3 but previous capacity was 2 so it can't store so it double the capacity of 2 as 4
    v.push_back(4);
    cout << " capacity = " << v.capacity() << endl; //capacity = 4
    v.push_back(9);
    cout << " capacity = " << v.capacity() << endl; //capacity = 8
    v.push_back(99);
    cout << " capacity = " << v.capacity() << endl; //capacity = 8
    v.push_back(109);
    cout << " capacity = " << v.capacity() << endl; //capacity = 8
    v.push_back(98);
    cout << " capacity = " << v.capacity() << endl; //capacity = 8
    v.push_back(19);
    cout << " capacity = " << v.capacity() << endl; //capacity = 16

    // size of vector = how many elements are present in vector
    cout << " size = " << v.size() << endl;

    cout << "Element at 2nd index " << v.at(6) << endl;
    cout << "Front element " << v.front() << endl;
    cout << "Front element " << v.back() << endl;

    // pop back

    cout << "before pop element is " << endl;
    for (int i : v)
    {
        cout << i
             << " ";
    }
    cout << endl;
    v.pop_back(); //19
    v.pop_back(); //98
    cout << "After pop_back element " << endl;
    for (int i : v)
    {
        cout << i
             << " ";
    }
    cout << endl;
    //clear - when we clear the vector size is clered but capacity(memory space)are not cleared.
    cout << "before clear the vector size is = " << v.size() << " & the capacity is " << v.capacity() << endl;
    v.clear();
    cout << "After clear the size is = " << v.size() << " & the capacity is " << v.capacity() << endl;
}