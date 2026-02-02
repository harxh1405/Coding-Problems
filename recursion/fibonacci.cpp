#include<unordered_map>
using namespace std;
class Solution {
public:
    unordered_map<int,int>reg;
    int fib(int n) {
        if(n==0) return 0;

        else if(n==1) return 1;

        else if(reg.find(n)!=reg.end()) return reg[n];

        else{
            reg[n]=fib(n-1)+fib(n-2);
            return reg[n];
        }
        
    }
};