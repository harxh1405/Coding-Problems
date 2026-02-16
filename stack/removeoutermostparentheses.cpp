#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        string ans;
        for(auto c:s){
            if(st.empty()){st.push(c);} //outermost
            else if(st.top()==c) {st.push(c); ans.push_back(c);}
            else {st.pop(); if(!st.empty()) ans.push_back(c);}
        }

        return ans;
    }
};