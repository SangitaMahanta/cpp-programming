// SubArray:
// continuous part of an array.
// ex : arr[] = 1 2 0 7 2 0 2
//      subarr[] = 2 0 7 2
// Number of subArrays of an array with n elements = nC2 + n = n*(n+1)/2.

// Problem : Given an array a[] of size n.
//      Output sum of each subarray of the given array.

// example :
//       arr[] = 1, 2, 2
//              (0)(1)(2)
// subArrays :
//         0th index         1th index    2th index 
//       1 || 1,2 || 1,2,2    2 || 2,2        2
//sum : 1      3      5       2     4         2

// Approach :
// 1. Iterate over all the subarrays.
// 2.   nested loop for every i = 0 to n-1
//                       for every j =i to n-1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of array element : ";
    cin>>n;
    int arr[n];
        cout<<"Taking the array input : "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // int arr[] = {1, 2, 2};
int current =0;
    for (int i = 0; i < n; i++)
    {
        current=0;
        for (int j = i; j < n; j++)
        {
            current+=arr[j];
            cout<<"sum of "<<i<<" subarray of sum = "<<current<<endl;
        }
        
    }
    
    
}

// SUBSEQUENCE  


