#include <vector>
using namespace std;
class Solution {
public:
    int countSubarray(vector<int>&nums,int bound){
         int l=0,count=0;
         int n=nums.size();
         for(int r=0;r<n;r++){
            if(nums[r]<=bound) count+=(r-l+1);
            else l=r+1;
         }

         return count;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countSubarray(nums,right)-countSubarray(nums,left-1);
    }
};