#include<vector>
#include<unordered_map> 
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;

        int l=0;
        int longest=0;
        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            while(mp[0]>k){
                mp[nums[l]]--;
                l++;
            }
            longest=max(longest,r-l+1);
        }
        return longest;
    }
};
