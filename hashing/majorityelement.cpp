#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,n=nums.size(),majElement;

        for(int i=0;i<n;i++){
            if(count==0){
                majElement=nums[i];
                count++;
            }

            else if(nums[i]!=majElement) count--;

            else count++;
        }

        return majElement;
    }
};