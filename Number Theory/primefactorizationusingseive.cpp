#include<iostream>
#include<vector>
using namespace std;
void printPrimeFactorization(int n) {
    // code here
    vector<int>seive(n+1,1);
    seive[0]=0,seive[1]=0;
    
    for(int i=2;i<=n;i++){
        if(seive[i]==1){
            for(int j=i*i;j<=n;j+=i){
                if(seive[j]==1) seive[j]=i;
            }
            seive[i]=i;
        }
    }
    while(n!=1){
        cout<<seive[n]<<" ";
        n=n/seive[n];
    }
}