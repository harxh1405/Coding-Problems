#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        for(auto c:s){
            if(c==')' && st.top()==0){
                st.pop();
                st.push(1);
            }else if(c==')' && st.top()!=0){
                int sum=0;
                while(st.top()!=0){
                    sum+=st.top();
                    st.pop();
                }
                st.pop();
                st.push(2*sum);
            }else st.push(0);
        }
        int score=0;
        while(!st.empty()){
           score+=st.top();
           st.pop();
        }
        return score;
    }
};