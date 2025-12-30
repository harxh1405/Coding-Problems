//Kadane's algorithm
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=nums[0];
        int os=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(cs>=0) cs+=nums[i];
            else cs=nums[i];
            if(cs>os)
            os=cs;

        }
        return os;
    }
};