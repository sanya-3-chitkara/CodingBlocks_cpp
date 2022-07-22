#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n;
	cin>>m;
	int gcd=min(n,m);
	while(gcd>0){
		if(n%gcd==0 && m%gcd==0){
			break;
		}
		gcd--;
	}
	cout<<gcd;
	return 0;
}
