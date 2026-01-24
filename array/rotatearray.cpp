#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>change(n,0);
        for(int i=0;i<n;i++){
            change[(i+k)%n]=nums[i];
        }
        nums=change;
    }
};