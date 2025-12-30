#include<vector>
using namespace std;
class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int xor_all=0;
        for(int i=0;i<arr.size();i++){
            xor_all^=arr[i];
        }
        return xor_all;
    }
};