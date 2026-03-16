#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;
        int n=asteroids.size();
        for(auto curr:asteroids){
            bool isPopped=false,isSameTop=false;
            if(st.empty() || !(st.top()>0 && curr<0)) {st.push(curr);continue;}
            while(!st.empty() && st.top()>0 && curr<0 && st.top()<=abs(curr)){
                

                if(st.top()==abs(curr)){
                    isSameTop=true;
                    st.pop();
                    break;
                }

                st.pop();
            }
            if(isSameTop) continue;
            if(st.empty()||st.top()<0) st.push(curr);

        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};