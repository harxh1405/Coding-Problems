#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>bucket(n*n+1,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                bucket[grid[i][j]]++;
                if(bucket[grid[i][j]]==2) ans.push_back(grid[i][j]);
            }
        }
        int k=bucket.size();
        for(int i=1;i<k;i++){
            if(bucket[i]==0){
                ans.push_back(i);
                break;
            }
        }
        
        return ans;
    }
};