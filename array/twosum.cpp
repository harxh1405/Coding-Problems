//one approach could be using set to store the seen elements and for each element check if target- element is present in set
//this will take nlogn time due to set operations
//better approach is to use hashmap to store the frequency of seen elements
//explore avl trees and red black trees for balanced bst implementations
//insertion,deletion and search all take logn time in balanced bst
//its easy to sort data in balanced bst by inorder traversal
//In unordered maps we don't get any order of keys as they are implemented using hash tables
//Insertion,deletion and search all take average o(1) time in unordered maps
//Unordered map is best suited for the problems where you don't want data in sorted order and want to perform operations in average o(1) time 
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>counterpart;
        for(int i=0;i<n;i++){
            if(counterpart.find(target-nums[i])!=counterpart.end()){
                return {counterpart[target-nums[i]],i};
            }
            counterpart[nums[i]]=i;
        }
        return {};
    }
};
