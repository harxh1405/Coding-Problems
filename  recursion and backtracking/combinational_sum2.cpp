#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void solve(int start,int target,vector<int>&candidates,vector<vector<int>>&output,vector<int>current={}){
        if(target==0){
            output.push_back(current);
            return;
        }
         for(int i=start;i<candidates.size();i++){
            //handling duplicates/////////////////////////////////
            if(i>start && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            //////////////////////////////////////////////////////
            current.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,output,current);
            current.pop_back();
         }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> output;
        sort(candidates.begin(),candidates.end());
        solve(0,target,candidates,output);
        return output;
    }
};