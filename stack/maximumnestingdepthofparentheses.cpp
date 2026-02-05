#include<string>
#include<stack>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int depth=0;
        for(auto c:s){
            if(c=='('){
                st.push(c);
                depth=max(depth,(int)st.size());
            }
            else{
                if(c==')') st.pop();
            }
        }
        return depth;
    }
};
