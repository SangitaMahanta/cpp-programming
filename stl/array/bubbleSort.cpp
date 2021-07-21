#include<iostream>
using namespace std;

// Time complexcity = O(n2)
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
 int counter = 1;
 while (counter < n)
 {
    for (int i = 0; i < n-counter; i++)
    {
        if(arr[i]>arr[i+1]){
            // swap
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;

        }
    }
    counter++;
 }
 



cout<<"printing the array "<<endl;
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
        
}
