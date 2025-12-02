//power set/all subsets of a set
// A={1,2,3}
//O/P:{},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}

#include <iostream>
#include<vector>
using namespace std;
void powerset(int index, int n, int arr[],vector<vector<int> > &ans,vector<int>current={}){
     if(index==n){
     	ans.push_back(current);
     	return;
     }
     current.push_back(arr[index]);
     powerset(index+1,n,arr,ans,current);
     current.pop_back(); //backtracking
     powerset(index+1,n,arr,ans,current);
    
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
    vector<vector<int> >ans;
    powerset(0,n,arr, ans);
    for(auto vec: ans){
    	for(auto ele: vec){
    		cout<<ele<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}
