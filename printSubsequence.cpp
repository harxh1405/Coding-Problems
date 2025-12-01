#include <iostream>
using namespace std;
void sub(string original,string tillnow){
     if(original.size()==0) {
     	cout<<tillnow<<endl;
     	return;
     }
     sub(original.substr(1),tillnow+original[0]);
     sub(original.substr(1),tillnow);

}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string original;
	cin>>original;
	sub(original,"");
	return 0;
}