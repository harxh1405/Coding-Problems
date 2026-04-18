#include<iostream>
using namespace std;
class Solution {
public:
    long long reverse(int n){
        int temp=n;
        long long rev=0;
        while(temp>0){
          int d=temp%10;
          rev=rev*10+d;
          temp=temp/10;
        }

        return rev;
    }
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};