#include<iostream>
using namespace std;

//in linearSearch we find the key element if the key
//  element is found then it returns index number if not then return -1

int linearSearch(int arr[],int n,int k){
for (int i = 0; i < n; i++)
{
    if(arr[i] == k){
        return i;
    }
}

    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of an array : - "<<endl;
    cin>>n;
     int arr[n];
     cout<<"Enter the elements : ";
     for (int i = 0; i < n; i++)
     {
       cin>>arr[i];
     }

     int key;
     cout<<"enter the key value : ";
     cin>>key;

     cout<<linearSearch(arr,n,key);
}