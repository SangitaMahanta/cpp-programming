#include <iostream>
using namespace std;


// int main()
// {
//   int* p;
//   int arr[5];
//   p=new int[5];
//       int arr1[5];
//   for (int i = 0; i < 5; i++)
//   {
//       cout<<"enter the value for index "<<endl;
//     //   cin>>*(p+i);
//       cin>>(arr1[i]=*(p+1));
      
//   }

//   for (int i = 0; i < 5; i++)
//   {
//       cout<<arr1[i]<<"\t";
//   }
  
  
//     return 0;
// }
int main(){
    int *p;
    // here p ia an array of size 5
    p = new int[5];

    for(int i = 0; i< 5; i++){
        cout<<"enter value for index "<<i<< " : " ;
        cin>>*(p+i);
    }

    for(int i = 0; i<5;i++){
        cout<<*(p+i)<<" ";
    }
} 