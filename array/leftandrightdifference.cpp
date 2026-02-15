#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix;
        vector<int>ans;
        int sum=0;
        for(int i=0;i<n;i++){
           sum+=nums[i];
           prefix.push_back(sum);//prefix sum of the array
        }
        int rs=0;
        int total=prefix[n-1];

        for(int i=0;i<n;i++){
            int diff=abs(prefix[i]-(total-rs));//difference between the sum of the elements to the left and right of the index i
            ans.push_back(diff);
            rs=prefix[i];
        }
        return ans;
    }
};