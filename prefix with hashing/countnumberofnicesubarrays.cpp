#include <vector>
#include <unordered_map>    
using namespace std;
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int,int>mp;
        mp[0]=1;

        int prefixSum=0,count=0;
        for(int i=0;i<n;i++){
             prefixSum+=(nums[i]%2);
             count+=mp[prefixSum-k];
             mp[prefixSum]++;
        }

        return count;
    }
};