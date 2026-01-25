#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int un=1, pos=1, count=1;
        while(un<n){
            if(nums[un]==nums[un-1]) un++;
            else{
                nums[pos]=nums[un];
                count++;
                pos++;
                un++;
            }
        }
        return count;
    }
};