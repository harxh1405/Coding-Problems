#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;
class Solution {
  public:
    int smallestSubstring(string s) {
        // code here
        int l=0,r=0;
        int n=s.size();
        unordered_map<char,int>mp;
        int minlen=INT_MAX;
        while(r<n){
            
            mp[s[r]]++;
            if(mp['0']>=1 && mp['1']>=1 && mp['2']>=1){
                while(mp[s[l]]>1){
                    mp[s[l]]--;
                    l++;
                }
                minlen=min(minlen,r-l+1);
            }
            
             
           r++;
        }
        
        return minlen!=INT_MAX ? minlen:-1;
    
        
    }
};
