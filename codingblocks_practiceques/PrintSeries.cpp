#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n;
	cin>>m;
	int i=1;
	int count=1;
	while(count<=n && i<=100){
		int x=3*i+2;
		if(x%m!=0){
			cout<<x;
			cout<<endl;
			count++;
		}
		i++;
	}
	return 0;
}
