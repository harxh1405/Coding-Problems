//remove every occurrence of a char by give char/string
#include <iostream>
using namespace std;
//stl containers are passed by values
void removeChar(char ch, string &str, string rep, size_t idx=0){
	//base case
	if(idx>str.size()) return;
	//character found at first index
    if(str[idx]==ch){
       str.erase(idx, 1);
       str.insert(idx,rep);
  
       return removeChar(ch, str, rep, idx+rep.length());
    }
    //character not found at first index
    return removeChar(ch,str,rep, idx+1);
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char ch;
	string str, rep;
	cin>>ch; //taking character from cin
	cin.ignore(numeric_limits<streamsize>::max(), '\n');//clearing the buffer
	getline(cin,str);//taking string input
	getline(cin,rep);//taking replacement string
    removeChar(ch,str,rep);
    cout<<str;
	return 0;
}