#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Taking an input of an array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
// 12 , 45 , 23 , 51 , 19 , 8
  for (int i = 1; i < n; i++)
    {
     int current = arr[i];
      int j = i-1;
      while (arr[j]>current && j>=0)
      {
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = current;
            
    }

    // printing the array 
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    
        
    
    
    
}
