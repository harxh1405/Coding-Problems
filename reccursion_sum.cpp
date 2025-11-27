// Given an array, Find the sum of all element in the array using recursion

#include <iostream>

using namespace std;
//find sum using recursion
int findSum(int arr[], int size){
	//base case
	if(size==0) return 0;
     //every recusrsive call does some work itself and leaves other work for recursion itself
    return arr[0] +findSum(arr+1, size-1);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[1000];
    int n;
    cin >> n;

    //taking input in array
    for(int i=0; i<n; i++){
    	cin>>arr[i];
    }

	cout<<findSum(arr,n);
	return 0;
}




