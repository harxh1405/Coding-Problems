#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n=a.size();
        int glob_diff=INT_MAX;
        sort(a.begin(),a.end());
        //sliding window
        for(int i=0;m+i-1<n;i++){
            int loc_diff=a[m+i-1]-a[i];
            if(loc_diff<glob_diff){
                glob_diff=loc_diff;
            }
        }
        return glob_diff;
    }
};