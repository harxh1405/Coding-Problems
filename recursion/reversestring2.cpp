#include<string>
#include<algorithm>

using namespace std;
class Solution {
public:
    void solve(string &s,int k,auto it,auto end,int rem){
        if(rem<=0){
            return;
        }

        else if(rem>=2*k) {
            reverse(it,it+k);
            solve(s,k,it+2*k,end,rem-2*k);
        }
        else if(rem>k && rem<=2*k){
            reverse(it,it+k);
            solve(s,k,it+2*k,end,rem-2*k) ; 
        }
        else{
            reverse(it,end);
            solve(s,k,it+2*k,end,rem-2*k);
        }

    }
    string reverseStr(string s, int k) {
        int n=s.size();
        auto it=s.begin();
        auto end=s.end();
        solve(s,k,it,end,n);
        return s;
    }
};