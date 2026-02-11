#include<vector>
using namespace std;
class Solution {
public:
    vector<int>curr;
    vector<vector<int>>ans;
    void solve(vector<int>&input,int k,int i){
       if(i==input.size()) return;

       if(curr.size()==k){
        ans.push_back(curr);
        return;
       }

        for(i=i+1;i<input.size();i++){
            curr.push_back(input[i]);
            solve(input,k,i);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>input;
        for(int i=1;i<=n;i++){
          input.push_back(i);
        }
        solve(input,k,-1);
        return ans;
    }
};