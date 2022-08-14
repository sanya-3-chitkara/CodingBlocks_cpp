#include<iostream>
using namespace std;
int main() {
	string str;
	cin>>str;
	string str1="";
	int n=str.length();
	for(int i=0;i<n;i++){
		int ascii=int(str[i]);
		int value=1;
		if(i%2==0){
			str1+=char(ascii+value);
		}
		else{
			str1+=char(ascii-value);
		}
	}
	cout<<str1;
	return 0;
}
