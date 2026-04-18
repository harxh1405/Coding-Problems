#include<iostream>
using namespace std;
class Solution {
public:
    long long reverseNum(int n){
        string s=to_string(n);
        reverse(s.begin(),s.end());
        long long val=stoll(s);
        return val;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n=nums.size();
        int min_dist=INT_MAX;
        unordered_map<long long,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                int dist=abs(i-mp[nums[i]]);
                min_dist=min(min_dist,dist);
            }
            long long r=reverseNum(nums[i]);
            mp[r]=i;
        }

        return min_dist==INT_MAX?-1:min_dist;
    }
};