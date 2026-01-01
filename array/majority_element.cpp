#include<vector>
using namespace std;
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        //Moore's voting algorithm
        int n=arr.size();
        int count=0;
        int candidate=-1;
        for(int x: arr){
            if(count==0){
                candidate=x;
                count=1;
            }
            else if(x==candidate) count++;
            else count--;
        }
        int freq=0;
        for(int x: arr){
            if(x==candidate) freq++;
        }
        return freq>n/2?candidate:-1;
        
    }
};