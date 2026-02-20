#include<queue>
#include<stack>
using namespace std;
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>st;
        if(q.size()<k||q.empty()) return q;
        int rem=q.size()-k;
        
        while(k--){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        while(rem--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};