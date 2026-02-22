#include<vector>
#include<queue>
using namespace std;
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n=arr.size();
        queue<int>q;
        vector<int>ans;
        //set the window
        for(int i=0;i<k;i++){
            if(arr[i]<0) q.push(i);
        }
        if(q.empty()) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        
        //slide the window
        for(int i=1;i<n-k+1;i++){
            if(arr[i+k-1]<0) q.push(i+k-1);
            if(!q.empty() && q.front()<i) q.pop();
            
            
            if(q.empty()) ans.push_back(0);
            else ans.push_back(arr[q.front()]);
        }
        
        return ans;
    }
};