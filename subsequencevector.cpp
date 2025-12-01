#include <iostream>
#include<vector>
using namespace std;
void sub(int idx, string original, string tillnow, vector<string> &v){
	if(idx >= original.size()){
		v.push_back(tillnow);
		return;
	}
	sub(idx+1,original,tillnow+original[idx],v);
	sub(idx+1,original,tillnow,v);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<string>v;
	string s;
	cin>>s;
	sub(0,s,"",v);
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<endl;
	return 0;
}