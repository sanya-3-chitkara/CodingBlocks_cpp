#include<iostream>
using namespace std;
int main() {
	char n;
	cin>>n;
	if(n>='a' && n<='z'){
		cout<<"lowercase"<<endl;
	}
	else if(n>='A' && n<='Z'){
		cout<<"UPPERCASE"<<endl;
	}
	else{
		cout<<"Invalid"<<endl;
	}
	return 0;
}
