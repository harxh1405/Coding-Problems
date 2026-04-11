#include<iostream>
using namespace std;

class Solution {
  public:
    int replaceBit(int n, int k) {
        // code here.
        int bits=log2(n)+1;
        int pos=bits-k;
        int mask=~(1<<pos);
        n=n&mask;
        return n;
    }
};