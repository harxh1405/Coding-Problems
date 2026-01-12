#include<vector>
#include<climits>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int m=INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        m=max(sum,m);
        for(int i=k;i<n;i++){
            int add_in=i;
            int sub_in=i-k;
            sum=sum+arr[add_in]-arr[sub_in];
            m=max(sum,m);
        }
        return m;
    }
};