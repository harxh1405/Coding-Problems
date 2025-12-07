#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    //int *arr=new int[5];
    //sort the data points
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //int *ptr=lower_bound(arr,arr+n,35);
    auto itr=lower_bound(arr.begin(),arr.end(),35);

    //if(ptr==arr+n)
    if(itr==arr.end()) cout<<"element is not present and no higher element"<<endl;
    // cout<<(*ptr)<<endl;
    else cout<<(*itr)<<endl;
    
    return 0;
}