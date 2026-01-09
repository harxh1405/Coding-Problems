#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0],ma,mi;
        ma=ans,mi=ans;
        for(int i=1;i<n;i++){
            if(nums[i]<0) swap(ma,mi);
            ma=max(nums[i],ma*nums[i]);
            mi=min(nums[i],mi*nums[i]);
            ans=max(ma,ans);

        }
        return ans;
    }
};