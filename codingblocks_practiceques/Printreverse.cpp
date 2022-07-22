#include<iostream>
using namespace std;
int main() {
	int n,reversed=0;
	cin>>n;
	while(n!=0){
		int remainder=n%10;
		reversed=reversed*10+remainder;
		n=n/10;
	}
	cout<<reversed;
	return 0;
}
