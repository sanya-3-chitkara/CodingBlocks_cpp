#include<iostream>
using namespace std;

void convert(string s){
	int num=0;
	int n=s.length();
	for(int i=0;i<n;i++){
		num=num*10+(int(s[i])-48);
	}
	cout<<num;
}

int main() {
	string str;
	cin>>str;
	convert(str);
	return 0;
}
