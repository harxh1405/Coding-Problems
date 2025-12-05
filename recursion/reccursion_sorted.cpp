// Given an array, find whether it is sorted or not using reccursion
//i/p: {},{10} o/p: true
//i/p:{10,1,2,6,9,5} o/p:false

#include <iostream>
#include<iomanip> //for bool alpha
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0||size==1) return true;
    if(arr[0]>arr[1]) return false;
    return isSorted(arr+1, size-1);
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
     int arr[1000];
     int n;
     cin>>n;
     //Taking input for array
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     cout<<boolalpha<<isSorted(arr,n); //use of boolalpha to print boolean values
     return 0;
}