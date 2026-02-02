#include<stack>
using namespace std;
class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>&s,int k){
        if(k==1){
            s.pop();
            return;
        }
        int top=s.top();
        s.pop();
        solve(s,k-1);
        s.push(top);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int n=s.size();
        int k=(n/2)+1;
        solve(s,k);
    }
};