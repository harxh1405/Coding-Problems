//handling duplicate elements in vector
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    void performPermutation(vector<int>&nums, vector<vector<int>>&output,int i){
        if(i==(int)nums.size()-1){
            output.push_back(nums);
            return;
        }
        //eliminating duplicate using unordered set
        unordered_set<int>s;
        for(int j=i; j<nums.size();j++){
            if(s.find(nums[j])!=s.end()) continue;
            s.insert(nums[j]);
            swap(nums[i],nums[j]);
            performPermutation(nums,output,i+1);
            swap(nums[i],nums[j]);//backtracking
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
    
        vector<vector<int>>output;
        performPermutation(nums,output,0);
        return output;
    
    }
};