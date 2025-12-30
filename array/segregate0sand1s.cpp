#include<vector>
using namespace std;
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n=arr.size();
        int k=0;//slow pointer
        for(int i=0;i<n;i++){
            if(arr[i]==0) arr[k++]=0;
        }
        while(k<n){
            arr[k++]=1;
        }
    }
};
