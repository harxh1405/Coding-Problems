#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> gcd(int a, int b) {
        // code here
        if(b==0){
            return {a,1,0};
        }
        
        vector<int>result=gcd(b,a%b);
        //bottom up approach
        int g=result[0];
        int x1=result[1];
        int y1=result[2];
        
        int x=y1;
        int y=x1-(a/b)*y1;
        
        return {g,x,y};
    }
};