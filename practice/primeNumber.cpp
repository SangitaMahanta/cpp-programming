#include<iostream>
using namespace std;
 int main(){
   int n;
   cout<<"enter a number to check prime or not "<<endl;
   cin>>n;
    
    bool flag=0;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<"The input number is Not-prime"<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"prime number";
    }
    


     return 0;

 }