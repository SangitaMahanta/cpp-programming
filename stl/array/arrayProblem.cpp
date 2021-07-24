// problem
// given an array a[] of size n. for every i
// from 0 to n-1 output max(a[0],a[1],...,a[i])

// example :
//       arr[] = 1, 0, 5, 4, 6, 8
//              (0)(1)(2)(3)(4)(5)
// max till i : 1  1  5  5  6  8

// Approach:
// 1. keep a variable 'max' which store the maximunm till i^th element.
// 2. iterate the whole array and update the element.

// Time Complexity - O(n)
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: " << endl;
    cin>>n;
    int arr[n];
    int maxNo = INT_MIN;
    int arr2[n];
    cout << "Taking the array elements: " << endl;
   
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

// 0 -9 1 3 -4 5
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>maxNo)
    //     {
    //         maxNo = arr[i];
    //         arr2[i] = maxNo;
    //     }
    //     else{
    //         maxNo = arr[i-1];
    //         arr2[i] = maxNo;
    //     }

        
    // }

   cout<<"printing the array maximunm till i^th element"<<endl;

    for (int i = 0; i < n; i++)
    {
        maxNo = max (maxNo,arr[i]);
        cout<<maxNo<<endl;
    }
    

//    cout<<"printing the array maximunm till i^th element"<<endl;
//     // print the array
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr2[i]<<" ";
//     }
}
