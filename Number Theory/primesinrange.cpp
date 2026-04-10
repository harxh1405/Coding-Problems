// User function Template for C++
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int countPrimes(int L, int R) {
        // code here
        vector<int>seive(R+1,1);
        seive[0]=0,seive[1]=0;
        int c=0;
        //create a sieve
        for(long long i=2;i<=R;i++){
            if(seive[i]){
                c++;
                
                for(long long j=i*i;j<=R;j+=i){
                    seive[j]=0;
                }
                
            }
            seive[i]=c;
        }
        if(L==0) return seive[R];
        
        return seive[R]-seive[L-1];
    }
};