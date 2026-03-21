#include <vector>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size(),l=0,r=0,product=1,count=0;
        if(k <= 1) return 0;
        while(r<n){
            product*=nums[r];

            while(product>=k){
                product /= nums[l];
                l++;
            }

            count+=(r-l+1);

            r++;
        }

        return count;
    }
};