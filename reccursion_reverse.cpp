//Given an array, reverese it using reccursion
#include <iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[],int size){
   if(size==0||size==1) return;
   swap(arr[0],arr[size-1]);
   reverseArray(arr+1, size-2);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
 	int arr[1000]; //4KB of memory
 	int n;
 	cin>>n;
 	//Filling our array
    for(int i=0; i<n; i++){
    	cin>>arr[i];
    }
    reverseArray(arr, n);
    //printing array
    for(int i=0; i<n; i++){
    	cout<<arr[i]<<" ";
    }
	return 0;
}