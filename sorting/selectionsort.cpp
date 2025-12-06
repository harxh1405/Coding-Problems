#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int *arr=new int[n];//dynamic memory allocation
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   //applying selection sort  
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]) swap(arr[i],arr[j]);
       }
   }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}