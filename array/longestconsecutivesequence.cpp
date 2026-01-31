#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>original;
        int maxcount=0;
        for(auto x:nums){
            original.insert(x);
        }
        for(auto &val:original){
            if(original.find(val-1)==original.end()){
                int count=1;
                int start=val;
                while(original.find(start+1)!=original.end()){
                    count++;
                    start++;
                }
                maxcount=max(count,maxcount);
            }
        }
        return maxcount;
    }
};