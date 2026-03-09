#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        int n=nums.size();
        for(auto el:nums){
            freq[el]++;
        }
        for(auto el:freq){
          if(el.second>n/3) ans.push_back(el.first);
        }

        return ans;
    }
};