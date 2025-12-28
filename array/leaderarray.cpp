//brute force approach
#include <iostream>
#include<vector>
using namespace std;
// int main()
// {
//     //O(n^2)
    // int n;
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
//     for(int i=0;i<n;i++){
//         int j;
//         for(j=i+1;j<n;j++){
//             if(arr[j]>arr[i])//not leader
//             break;
//         }
//         if(j==n) cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//O(n) approach
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int leader=arr[n-1];
    cout<<leader<<" ";
    for(int i=n-2; i>=0; i--){
        if(arr[i]>leader){
            leader=arr[i];
            cout<<leader<<" ";
        }
    }
}