#include<vector>
using namespace std;
class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n-1;i+=2){
            if(arr[i]<arr[i+1]) swap(arr[i],arr[i+1]);
        }
    }
};
