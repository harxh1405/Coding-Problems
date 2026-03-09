#include <vector>
using namespace std;
class Solution {

public:
    
    void solve(vector<int>&nums,vector<int>&curr,vector<vector<int>>&ans,vector
    <bool>&used){
        //base case
        if(nums.size()==curr.size()){
            ans.push_back(curr);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            curr.push_back(nums[i]);
            used[i]=true; //visited
            solve(nums,curr,ans,used);
            curr.pop_back();
            used[i]=false;//unvisited
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>curr;
        vector<bool>used(n,false);
        solve(nums,curr,ans,used);

        return ans;
    }
};