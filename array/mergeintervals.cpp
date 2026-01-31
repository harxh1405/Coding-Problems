#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        if(intervals.empty()) return {};
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            // int m=ans.size()-1;
            auto &last=ans.back();
            if(intervals[i][0]<=last[1]){
                last[1]=max(last[1],intervals[i][1]);
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};