//At any time we try to work on the leading data structure when working with reccursion
//we use a variable that shifts continuously to give new ds in every recurrsion call
//Jab DS ke paas control denge to jo bhi work kara hai use undo krna padega
//finding all permutations of the string
#include <iostream>
#include<vector>
using namespace std;
void permute(int idx, string input, vector<string> &ans){
    if(idx==input.size()){
        ans.push_back(input);
        return;
    }
    for(int j=idx; j<input.size();j++){
        swap(input[idx],input[j]);
        permute(idx+1,input,ans);
        swap(input[idx],input[j]);//backtracking inversion
    }
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string input;
	cin>>input;
	vector<string>ans;
	permute(0,input,ans);
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
