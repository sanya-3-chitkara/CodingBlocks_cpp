#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int octal=0, countval=1;
	while(n!=0){
		int remainder=n%8;
		octal+=remainder*countval;
		countval*=10;
		n/=8;
	}
	cout<<octal;
	return 0;
}
