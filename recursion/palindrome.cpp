#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x,long long rev){
        if(x==0) return rev;


        return reverse(x/10,rev*10+(x%10));
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        return x==reverse(x,0);
    }
};