#include <vector>
using namespace std;
class Solution {
public:
    vector<int> solve(vector<int>&nums){
        int n=nums.size();
        int k=0;//slow pointer
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }
        //pad the remaining with 0s
        while(k!=n){
            nums[k]=0;
            k++;
        }
        return nums;
    }
    void moveZeroes(vector<int>& nums) {
        solve(nums);
    }
};
//better approach
class Solution {
public:
    vector<int> solve(vector<int>&nums){
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
             swap(nums[i],nums[k]);
             k++;
            }
        }
        return nums;
    }
    void moveZeroes(vector<int>& nums) {
        solve(nums);
    }
};