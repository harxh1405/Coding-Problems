#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        stack<vector<int>>st;

        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();


        for(int i=0;i<n;i++){
            if(!st.empty() && intervals[i][0]<=st.top()[1]){
                st.top()[1]=max(intervals[i][1],st.top()[1]);
            }else st.push(intervals[i]);
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};