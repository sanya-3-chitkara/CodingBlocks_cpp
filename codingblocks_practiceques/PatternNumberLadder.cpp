#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int p=1;
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<p<<" ";
			p++;
		}
		cout<<endl;
	}
	
	return 0;
}
