#include<iostream>
using namespace std;
 int main(){
   int n;
   cout<<"enter a number : "<<endl;
   cin>>n;
   int reverse=0;
  while (n>0)
  {
    int lastDigit=n%10;
    reverse = reverse*10+lastDigit;
    n=n/10;

  }
  cout<<"The reverse number is : "<<reverse;

     return 0;

 }
