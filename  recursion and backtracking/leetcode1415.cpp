#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string s="";
    vector<string>outSet;
    void dfs(int n){
       if(n==0){
        outSet.push_back(s);
        return;
       }
       for(int i=0;i<3;i++){
        char c='a'+i;
        if(s.empty()||s.back()!=c){
            s.push_back(c);
            dfs(n-1);
            s.pop_back();
        }
        
    }
}

    string getHappyString(int n, int k) {
        dfs(n);
        if (k > outSet.size()) return "";
        return outSet[k-1];
    }
};