#include<vector>
#include<string>
#include<cctype>
using namespace std;
class Solution {
public:
    vector<string>out;
    string curr="";
    void solve(string &s,string &curr,int i){
        if(i==s.size()){
           out.push_back(curr);
           return;
        }
        else if(isalpha(s[i])){
            curr.push_back(tolower(s[i]));
            solve(s,curr,i+1);
            curr.pop_back();
            curr.push_back(toupper(s[i]));
            solve(s,curr,i+1);
            curr.pop_back();
        }
        else{
            curr.push_back(s[i]);
            solve(s,curr,i+1);
            curr.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        solve(s,curr,0);
        return out;
    }
};