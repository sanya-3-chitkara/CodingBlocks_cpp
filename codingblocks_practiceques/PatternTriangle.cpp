#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int space=n-1;
	int p=1;
	for(int i=1;i<=n;i++){
		p=i;
		for(int j=1;j<=space;j++){
			cout<<"  ";
		}
		space--;
		for(int j=1;j<=i;j++){
			cout<<p<<" ";
			p++;
		}
		p--;
		p--;
		for(int j=1;j<i;j++){
			cout<<p<<" ";
			p--;
		}
		cout<<endl;
	}
	return 0;
}
