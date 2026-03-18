#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int,int>mp;

        mp[0]=1;  //very very important

        int prefixSum=0;
        int count=0;

        for(auto x:nums){
            prefixSum+=x;
            int rem=prefixSum % k;
            if(rem<0) rem+=k; //brings rem bw [1,k-1]
            count+=mp[rem];
            mp[rem]++;
        }

        return count;
    }
};