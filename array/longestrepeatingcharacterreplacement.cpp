#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int>mp;
        int maxfreq=0;
        int window=0;
        int l=0;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            maxfreq=max(maxfreq,mp[s[r]]);
            while(r-l+1-maxfreq>k){
                mp[s[l]]--;
                l++;
            }
            window=max(window,r-l+1);
        }
        return window;
    }
};