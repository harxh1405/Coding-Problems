#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void solve(vector<int>input,int target,vector<vector<int>>&ans,int i,vector<int>curr={}){
        //base case
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(i==input.size()||target<0) return;

        curr.push_back(input[i]);
        solve(input,target-input[i],ans,i,curr);
        curr.pop_back();
        solve(input,target,ans,i+1,curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        solve(candidates,target,ans,0);
        return ans;
    }
};