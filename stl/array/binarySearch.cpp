#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int s){
 int f = 0;
 int l = n;
 while (f<=l)
 {
     int  mid = f + (l -f)/2;
     if (arr[mid] == s)
     {
       return mid;
     }
     else if (arr[mid]>s)
     {
         l = mid-1;
         
     }
     else if (arr[mid]<s)
     {
         f = mid+1;

     }
     
     
 }
 return -1;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>> n;
    int arr[n];
    cout<< " taking array input :";
    for (int i = 0; i < n; i++)
    {
      cin>> arr[i] ;
    }

    int searchItem ;
    cout<<"enter the search item : ";
    cin>>searchItem;
    cout<<binarySearch(arr,n,searchItem);
    
}