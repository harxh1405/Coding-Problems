//Remove a particular character from the string using reccursion
#include <iostream>

using namespace std;
void removeChar(char ch, string &s, size_t index=0){
	//if first char of the string matches to ch passed
	if(index>=s.size()) return;
	if(s[index]==ch){
		s.erase(index,1);
		removeChar(ch,s,index);
	}
	//if first char of str does not match ch passed
	else removeChar(ch,s,index+1);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char ch;
	string s;
	cin>>ch; //leaves newline \n in the buffer
	cin.ignore();//remove leftover newlines from cin
	getline(cin,s);
	removeChar(ch,s); //for string no need to pass size, only required for c styled arrays
	cout<<s;
	return 0;
}
//Why are we passing string by reference?
//why are we using size_t type for index?