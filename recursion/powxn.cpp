#include<unordered_map>
using namespace std;
class Solution {
public:
    unordered_map<int,double>reg;
    double solve(double x,long long n){
        if(n==0) return 1;
        else if(n==1) return x;
        else if(reg.find(n)!=reg.end()) return reg[n];
        else if(n%2==0) reg[n]=solve(x,n/2)*solve(x,n/2);
        else reg[n]=solve(x,n/2)*solve(x,n/2)*x;
        return reg[n];
       
    }
    double myPow(double x, int n) {
        long long pow=n;
        if(n>0) return solve(x,pow);
        else return solve(1/x,abs(pow));
    }
       
};
