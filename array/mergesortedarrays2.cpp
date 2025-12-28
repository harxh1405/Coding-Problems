//without using extra space
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<int>a(m),b(n);
    for(int i=0;i<m;i++){
      cin>>a[i];
    }
    for(int j=0;j<n;j++){
       cin>>b[j];
    }
    int i=m-1,j=0;
    while(i>=0 && j<n){
        if(a[i]>b[j]){
            swap(a[i--],b[j++]);
        }
        else break;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<m;i++) cout<<a[i]<<" ";
    for(int j=0;j<n;j++) cout<<b[j]<<" ";
    return 0;
}