#include<iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main() {
	int n,m;
	cin>>n;
	cin>>m;
	cout<<(n*m)/gcd(n,m);
	return 0;
}
