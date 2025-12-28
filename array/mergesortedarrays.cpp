#include <iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<int>a(m),b(n),c(m+n);
    for(int i=0;i<m;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
       cin>>b[i];
    }
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    for(auto ele: c){
        cout<<ele<<" ";
    }
}