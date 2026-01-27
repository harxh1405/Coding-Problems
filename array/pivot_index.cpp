#include <vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            pre[i]=sum;
        }
        int totalSum=pre[n-1];
        for(int i=0;i<n;i++){
            int ls=i>0?pre[i-1]:0;
            int rs=totalSum-pre[i];
            if(ls==rs) return i;
        }
        return -1;
    }
};