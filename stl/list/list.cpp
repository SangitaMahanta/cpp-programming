// in c++ list are totally based on doubly linked list
 
 #include<iostream>
 #include<list>
 using namespace std;

 int main(){
     list<int> l;
     l.push_back(1);
     l.push_front(2);

     for(int i : l){
         cout<<i<<" ";
     }
     cout<<endl;

    //  erese
    // oder of complexity o(n)
    l.erase(l.begin());
    cout<<"After erese "<<endl;
       for(int i : l){
         cout<<i<<" ";
     }
     cout<<endl;
     cout<<"size of list "<<l.size();
     cout<<endl;

    //  copy the list item into another list
    list<int> newList(l);
    cout<<"new list ";
        for(int i : newList){
         cout<<i<<" ";
     }
     cout<<endl;
    list<int> n(5,100);
    cout<<"list contain 5 times 100 "<<endl;
        for(int i : n){
         cout<<i<<" ";
     }
     cout<<endl;
 }