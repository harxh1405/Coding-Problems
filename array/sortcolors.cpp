#include <vector>
using namespace std;
class Solution {
public:
    vector<int> solve(vector<int>&nums){
        int c0=0,c1=0,c2=0;
        int n=nums.size();
        //counting each color
        for(int i=0;i<n;i++){
            if(nums[i]==0) c0++;
            else if(nums[i]==1) c1++;
            else c2++;
        }
        //filling each color 
        for(int i=0;i<c0;i++) nums[i]=0;
        for(int i=c0;i<c0+c1;i++) nums[i]=1;
        for(int i=c0+c1;i<n;i++) nums[i]=2;
        return nums;
    }
    void sortColors(vector<int>& nums) {
        solve(nums);
    }
};