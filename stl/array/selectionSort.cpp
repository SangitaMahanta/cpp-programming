#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array : "<<endl;
   cin>>n;
   
    int arr[n];
    cout<<"taking an input : "<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
            
        }
        
    }
cout<<"printing the array "<<endl;
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
        
}
