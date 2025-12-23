#include <iostream>
#include<vector>
using namespace std;
void reversearray(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n/2;i++){
        swap(nums[i],nums[n-i-1]);
    }
}
int main()
{
   int n;
   cin>>n;
   vector<int>nums(n);
   //fill array 
   for(int i=0;i<n;i++){
       cin>>nums[i];
   }
   reversearray(nums);
   for(int i=0;i<n;i++){
       cout<<nums[i];
   }
    return 0;
}