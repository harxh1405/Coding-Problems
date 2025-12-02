//Generate all valid parenthesis expression
//n=2 -> 1.()() 2.(())
//n=3 -> 1.((())) 2.(())() 3.()(()) 4.()()()
// when solving using reccursion always try to model the reccursion
#include <iostream>

using namespace std;
void generate(string tillnow, int open, int close){
     if(open==0 && close==0){
     	cout<<tillnow<<endl;
     	return;
     }
     if(open>0){
     	generate(tillnow+"(",open-1,close);
     }
     if(close>0 && open<close)
     	generate(tillnow+")",open,close-1);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	generate("",n,n);
	return 0;
}