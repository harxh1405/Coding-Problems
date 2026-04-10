#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {

        if(n<2) return 0;

        //create a prime seive
        vector<int>seive(n,1); //default seive with all primes
        seive[0]=0,seive[1]=0; 
        for(long long i=2;i*i<n;i++){
            if(seive[i]){
                for(long long j=i*i;j<n;j+=i){
                    seive[j]=0;
                }
            }
        }

        return count(seive.begin(),seive.end(),1);

    }
};