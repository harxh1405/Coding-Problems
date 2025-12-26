#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *prefix_sum=new int[n];
    prefix_sum[0]=arr[0];
    //building prefix sum array
    for(int i=1; i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(a!=b)
        cout<<prefix_sum[b]-prefix_sum[a-1];
        else
        cout<<arr[a];
    }
    return 0;
}