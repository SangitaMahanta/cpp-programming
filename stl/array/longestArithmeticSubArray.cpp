// An arithmetic array is an array that contains at least two integers and the difference between consecutive integers are equal.
// Example :
// [9,10],[3,3,3],[9,7,5,3] are arithmetic array
// while [1,3,3,7],[2,1,2] and[1,2,4] are not arithmetic arrays.
//[1,2,4] = 4-2 =2 and 2-1 =1 so the difference is not same so it is not a arithmetic array

// problem :
// saraswati has an array of N non-negative integers. the i-th integer of the array is A. she wants to choose a contiguous arithmetic subarray from her array that has the maximum length. 
// arr[] = {10,7,4,6,8,10,11};
#include<iostream>
using namespace std;


int main(){
int arr[]= {10,7,4,6,8,10,11};
int curr=arr[0]-arr[1];
int count=0;
for (int i = 2; i < 7; i++)
{
       if(arr[i]-arr[i-1] == curr){
           curr = arr[i]-arr[i-1];
           count++;
       }else{
           

       }
    
    
}

}