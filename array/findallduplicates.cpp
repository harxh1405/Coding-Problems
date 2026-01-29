//O(n)+O(n) space
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> record;
        vector<int>ans;
        for(int i=0;i<n;i++){

            if(record.find(nums[i])==record.end()) record[nums[i]]=1;
            else ans.push_back(nums[i]);
        }
        return ans;
    }
};