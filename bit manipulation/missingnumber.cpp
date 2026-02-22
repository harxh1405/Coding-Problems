#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorAll=0;
        for(auto el:nums){
            xorAll^=el;
        }
        for(int i=0;i<=nums.size();i++){
            xorAll^=i;
        }
        return xorAll;
    }
};