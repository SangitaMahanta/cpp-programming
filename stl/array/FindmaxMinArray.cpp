#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[n];
    }

    // int maxNo=0;
    // int minNo=0;
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
        //  if(arr[i]>maxNo){
        //     maxNo = arr[i];
        // }
        // if(arr[i]<minNo){
        //     minNo = arr[i];
        // }
    }
    cout<<"Maximun no of an array = "<<maxNo<<endl;
    cout<<"Minimun no of an array = "<<minNo<<endl;

}