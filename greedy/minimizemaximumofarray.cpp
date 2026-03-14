#include <vector>
using namespace std;
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        double total=nums[0],res=nums[0];
        for(int i=1;i<n;i++){
           total+=nums[i];
           res=max(res,(total+i)/(i+1));
        }
        return res;
    }
};