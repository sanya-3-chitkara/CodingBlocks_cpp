#include<iostream>
using namespace std;
string isPalindrome(string str){
	for(int i=0;i<str.length()/2;i++){
		if(str[i]!=str[str.length()-i-1]){
			return "false";
		}
	}
	return "true";
}
int main() {
	string str;
	cin>>str;
	cout<<isPalindrome(str);
	return 0;
}
