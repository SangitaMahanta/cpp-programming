
//fixed static array are used here
//  
#include<iostream>
#include<deque>
using namespace std;
int main(){
    // in dequeue we can add element in front as well as in back also
    deque<int> d;
    d.push_back(1);
    d.push_back(5);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);

    for (int i : d)
    {
        cout<< i << " ";
    }
    cout<<endl;
    d.pop_back();
    cout<< " after pop_back "<<endl;
      for (int i : d)
    {
        cout<< i << " ";
    }
    cout<<endl;
    d.pop_front();
    cout<< " after pop_front "<<endl;
      for (int i : d)
    {
        cout<< i << " ";
    }
    // print index elemet for use at()
    cout<<endl<<"print third index element "<<d.at(2)<<endl;
    cout<< "front "<<d.front()<<endl;
    cout<< "back "<<d.back()<<endl;
    cout<< "to check dequeue is empty or not : "<<d.empty()<<endl;
    cout<< "before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//erese for first element
    cout<< "after erase "<<d.size()<<endl;
   for (int i : d)
    {
        cout<< i << " ";
    }
    cout<<endl;

 }
