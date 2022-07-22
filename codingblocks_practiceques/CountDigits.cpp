#include<iostream>
using namespace std;
int main() {
	int n,find,count=0;
	cin>>n;
	cin>>find;
	while(n>0){
		int rem=n%10;
		n/=10;
		if(rem==find){
			count++;
		}
	}
	cout<<count;
	return 0;
}
