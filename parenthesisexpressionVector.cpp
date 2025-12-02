//Generate all valid parenthesis expression
//n=2 -> 1.()() 2.(())
//n=3 -> 1.((())) 2.(())() 3.()(()) 4.()()()
// when solving using reccursion always try to model the reccursion
#include <iostream>
#include<vector>
using namespace std;
void generate(string tillnow, int open, int close, vector<string> &v){
     if(open==0 && close==0){
     	v.push_back(tillnow);
     	return;
     }
     if(open>0){
     	generate(tillnow+"(",open-1,close,v);
     }
     if(close>0 && open<close)
     	generate(tillnow+")",open,close-1,v);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<string> v;
	int n;
	cin>>n;
	generate("",n,n,v);
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
	return 0;
}