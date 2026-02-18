#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //brute force
        int m=nums1.size();
        int n=nums2.size();
        unordered_map<int,int>mp;
        stack<int>st;
        vector<int>ans(m,-1);
        for(int i=0;i<m;i++){
            mp[nums1[i]]=i;
        }//O(m)
        // for(int i=0;i<n;i++){
            // if(mp.find(nums2[i])!=mp.end()){
            //     int j;
            //     for(j=i+1;j<n;j++){
            //         if(nums2[j]>nums2[i]){
            //             nums1[mp[nums2[i]]]=nums2[j];
            //             break;
            //         }   
            //     }
            //     if(j==n) nums1[mp[nums2[i]]]=-1;
            // }
        // }

            //solution 2
            for(int i=0;i<n;i++){
                while(!st.empty() && nums2[i]>nums2[st.top()]){
                    ans[mp[nums2[st.top()]]]=nums2[i];
                    st.pop();
                }
                if(mp.find(nums2[i])!=mp.end()) st.push(i);
            }

        return ans;
    }
};