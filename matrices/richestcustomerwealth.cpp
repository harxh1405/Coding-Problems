#include<vector>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int maxsum=0;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                 sum+=accounts[i][j];     
            }
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};