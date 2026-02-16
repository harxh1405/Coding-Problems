#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;

        for(auto c:s){
           if(st.empty()) st.push(c);
           else if(c==')' && st.top()=='(') st.pop();
           else st.push(c);
        }
        return st.size();
    }
};