#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string>mp={
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    void solve(string &digits,vector<string>&ans,string &curr,int i){
        if(i==digits.size()){
            ans.push_back(curr);
            return;
        }
        string letters=mp[digits[i]-'0'];
        for(int j=0;j<letters.size();j++){
            curr.push_back(letters[j]);
            solve(digits,ans,curr,i+1);
            curr.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
        string curr;
        solve(digits,ans,curr,0);
        return ans;
    }
};