#include<iostream>
using namespace std;

int main()
{
  int arr[]={0,-9,3,2,9};
  int max_val=0;
  for (int i = 0; i < 5; i++)
  {
     max_val= max(max_val,arr[i]);
  }
  cout<<max_val;

   return 0;
}
