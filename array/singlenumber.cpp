#include<vector>
using namespace std;
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        //creating the hash map from array
        // for(auto i:arr){
        //     freq[i]++;
        // }
        // for(auto &item:freq){
        //     if(item.second%2!=0) return item.first;
        // }
        
        int singleNumber=arr[0];
        for(int i=1;i<n;i++){
            singleNumber^=arr[i];
        }
        return singleNumber;
    }
};