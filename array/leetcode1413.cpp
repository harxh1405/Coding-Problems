#include <vector>
using namespace std;
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int prefix=0;
        int minprefix=INT_MAX;
        for(int i=0;i<n;i++){
            prefix+=nums[i];
            minprefix=min(minprefix,prefix);
        }
        return minprefix>0?1:1-minprefix;
    }
};