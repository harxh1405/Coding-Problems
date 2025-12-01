#include <iostream>
using namespace std;
void sub(int idx, string original, string tillnow){
	if(idx >= original.size()){
		cout<<tillnow<<endl;
		return;
	}
	sub(idx+1,original,tillnow+original[idx]);
	sub(idx+1,original,tillnow);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin>>s;
	sub(0,s,"");
	return 0;
}