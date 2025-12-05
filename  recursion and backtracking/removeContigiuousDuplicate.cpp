#include <iostream>
using namespace std;
void removeContagiousDuplicates(string &str, size_t idx=0){
	if(idx+1>str.size()) return;//base case
   //if the first and second char matches
	if(str[idx]==str[idx+1]){
		str.erase(idx,1);
		return removeContagiousDuplicates(str,idx);
	}
   //no match
	return removeContagiousDuplicates(str,idx+1);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	
	getline(cin,s);
	removeContagiousDuplicates(s);
	cout<<s<<" ";
	return 0;
}