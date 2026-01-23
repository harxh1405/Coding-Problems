#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        //Moore's voting algorithm
        //O(n) time and O(1) space
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
//O(n) time and O(n) space
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
     
        int n=arr.size();
        unordered_map<int,int> freq;
        //filling the unordered map
        for(auto i:arr){
            freq[i]++;
        }
        for(auto item: freq){
            if(item.second>n/2) return item.first;
        }
        return -1;
        
    }
};