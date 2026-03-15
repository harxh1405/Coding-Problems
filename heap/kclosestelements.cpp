#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;
        
        for(auto el:arr){
            pq.push({abs(el-x),el});

            if(pq.size()>k) pq.pop();
        }

        vector<int>ans;

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(ans.begin(),ans.end());
        return ans;

    }
};