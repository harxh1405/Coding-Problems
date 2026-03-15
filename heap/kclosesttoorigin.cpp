#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        int n=points.size();
        for(int i=0;i<n;i++){
           int d=points[i][0]*points[i][0]+points[i][1]*points[i][1];
        
           pq.push({d,i});

           if(pq.size()>k) pq.pop();
        }
        vector<vector<int>>ans;
        while(!pq.empty()){
           ans.push_back(points[pq.top().second]);
           pq.pop();
        }

        return ans;
    }
};