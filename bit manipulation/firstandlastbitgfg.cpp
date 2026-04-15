#include<iostream>
using namespace std;
class Solution {
  public:

    int onlyFirstAndLastAreSet(long long int n) {
        // complete the function here
        if(n<=0 || !(n&1)) return false;
        int x=n&(n-1);
        
        
        return (x&x-1)==0;
    }
};