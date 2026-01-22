#include<vector>
#include<algorithm>
using namespace std;
//nlogn approach
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int seclarge;
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                seclarge=arr[i];
                return seclarge;
            }
        }
        return -1;
    }
};

//n approach
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int m=arr[0];
        int sm=-1;
        for(int i=1;i<n;i++){
            if(arr[i]>m){
                sm=m;
                m=arr[i];
            }
            else if(arr[i]>sm && arr[i]!=m) sm=arr[i];
        }
        return sm;
    }
};