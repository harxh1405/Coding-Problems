#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>need(26,0),window(26,0);
        vector<int>out;
        for(auto c:p){
            need[c-'a']++;
        }

        //set the window

        int k=p.size();
        int n=s.size();
        if(k>n) return {};
        for(int i=0;i<k;i++){
            window[s[i]-'a']++;
        }

        if(window==need) out.push_back(0);

        //slide the window

        for(int i=1;i<n-k+1;i++){
            window[s[i+k-1]-'a']++;
            window[s[i-1]-'a']--;

            if(window==need) out.push_back(i);
        }

        return out;

    }
};