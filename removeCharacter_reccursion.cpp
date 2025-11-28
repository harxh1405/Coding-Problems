//Remove a particular character from the string using reccursion
#include <iostream>
using namespace std;
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
	cout<<ch<<"\n";
	cout<<s;
	return 0;
}
