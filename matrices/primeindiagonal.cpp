#include <vector>
using namespace std;
class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false; 
        if(n==2) return true; 
        if(n%2==0) return false;  

        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false; 
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int maxPrime=0;
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i])) maxPrime=max(maxPrime,nums[i][i]);
            if(isPrime(nums[i][n-1-i])) maxPrime=max(maxPrime,nums[i][n-1-i]);
        }
        return maxPrime;
    }
};