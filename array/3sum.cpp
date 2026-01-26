#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>out;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            while(i>0 && nums[i]==nums[i-1])i++;
            int a=i+1,b=n-1;
            while(a<b){
                while(a!=(i+1) && a<b && nums[a]==nums[a-1]) a++;
                while(b!=(n-1) && a<b && nums[b]==nums[b-1]) b--;
                int target=-1*nums[i];
                int sum=nums[a]+nums[b];
                if(sum==target){
                    out.push_back({nums[i],nums[a],nums[b]});
                    a++; b--;
                }
                else if(sum>target) b--;
                else a++;
            }
        }
        return out;
    }
};