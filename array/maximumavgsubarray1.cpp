#include<vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double maxavg;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxavg=sum/k;
        for(int i=1;i<n-k+1;i++){
           int del=i-1;
           int add=i+k-1;
           sum=sum-nums[del]+nums[add];
           maxavg=max(maxavg,sum/k);
        }
        return maxavg;
    }
};