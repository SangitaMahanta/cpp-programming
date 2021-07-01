#include<iostream>
#include<array>

using namespace std;
int main(){
      // using for each loop

    array<int,5>a={12,33,44,6,66};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
    cout<<a[i]<<endl;
    }

    // using for each loop
    for(int i : a){
        cout<<i<<" ";
    }
cout<<endl;
    cout<<"Element at index 2 "<<a.at(1)<<endl;
    // cout<<"Element at index 5 "<<a.at(6);// array index out of bound
    cout<<"Empty or not "<<a.empty()<<endl;
    array<int,4>b={11,22,33,44};
    b.fill(12);
    cout<<"fills the array b with same element ";
     for(int i : b){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Element at the front "<<a.front()<<endl;
    cout<<"Element at the back "<<a.back()<<endl;

    // end() and begin() gives the starting memory address and last memory location address
    cout<<"Element at the begin "<<a.begin()<<endl;
    cout<<"Element at the end "<<a.end()<<endl;
    // cout<<swap(a.begin(),a.end())<<endl;

// swapping of 2 array by using stl
array<int,5> a1={11,99,88,77,66};
array<int,5> a2 ={1,2,3,4,5};
cout<<"Before swapping";
 for(int i : a1){
        cout<<i<<" ";
    }
 for(int i : a2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After swapping";
    a1.swap(a2);
 for(int i : a1){
        cout<<i<<" ";
    }
 for(int i : a2){
        cout<<i<<" ";
    }
}