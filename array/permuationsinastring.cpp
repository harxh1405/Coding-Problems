#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>need(26,0),window(26,0);
        if(s1.size()>s2.size()) return false;
        for(auto c:s1){
            need[c-'a']++;
        }
        //first window
        int k=s1.size();
        int n=s2.size();

        for(int i=0;i<k;i++){
            window[s2[i]-'a']++;
        }

        if(need==window) return true;

        //start sliding window

        for(int i=1;i<n-k+1;i++){
            window[s2[i+k-1]-'a']++;
            window[s2[i-1]-'a']--;

            if(window==need)return true;
        }

        return false;
        
    }
};