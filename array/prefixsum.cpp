#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>out;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            out.push_back(sum);
        }
        return out;
    }
};