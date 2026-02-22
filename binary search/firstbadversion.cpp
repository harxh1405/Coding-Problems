// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

using namespace std;
class Solution {
public:
    bool isBadVersion(int version){
        // return true;
    }
    int firstBadVersion(int n) {
        int L=1;
        int R=n;

        while(L<=R){
            int M=L+(R-L)/2;
            if(isBadVersion(M)){
                if(M-1>0 && isBadVersion(M-1)) R=M-1;
                else return M;
            }else L=M+1;

        }

        return -1;
    }
};